#pragma once
#include <string>
#include <array>
#include <vector>

#include "process_state.hpp"
#include "bypass_handler.hpp"

#pragma warning(disable : 26495)

// TODO
// same approach as with graphics handler, refactor to become instance agnostic service provider

class memory_handler
{
	static unsigned long process_id;
	
public:

	static auto init() -> bool;

	static auto terminate() -> void;

	static auto attach(unsigned long proc_id) -> void;
	
	template<typename T>
	static auto read(uintptr_t from) -> T;

	template<typename T>
	static auto write(uintptr_t to, T value) -> void;

	static auto read_bytes(uintptr_t from, size_t length) -> void*;

	static auto read_chain(uintptr_t base, std::vector<uintptr_t> offsets) -> uintptr_t;
	
	static auto read_narrow_string(uintptr_t string_address) -> std::string;
	
	static auto get_module_address(const wchar_t* module_name) -> uintptr_t;
};

template <typename T>
auto memory_handler::read(const uintptr_t from) -> T
{
	T ret;

	bypass_handler::read_memory(process_id, reinterpret_cast<void*>(from), &ret, sizeof(ret));

	return ret;
}

template <typename T>
auto memory_handler::write(const uintptr_t to, T value) -> void
{
	bypass_handler::write_memory(process_id, reinterpret_cast<void*>(to), &value, sizeof(value));
}