#pragma once
#include <cstdint>

#include "offset.hpp"
#include "memory_handler.hpp"

class brightness_contrast_gamma
{
	// CC_BrightnessContrastGamma
	
	float brightness;

	float contrast;

	float red_coeff;

	float green_coeff;

	float blue_boeff;

	float gamma;
	
public:

	uintptr_t address;

	brightness_contrast_gamma(uintptr_t addr) : address(addr)
	{
		
	}

	auto get_brightness() const -> float
	{
		return memory_handler::read<float>(
			address + offset::cc_brightness_contrast_gamma::brightness);
	}
	
	auto set_brightness(float value)
	{
		return memory_handler::write<float>(
			address + offset::cc_brightness_contrast_gamma::brightness, value);
	}
	
	auto get_contrast() const -> float
	{
		return memory_handler::read<float>(
			address + offset::cc_brightness_contrast_gamma::contrast);
	}

	auto set_contrast(float value)
	{
		return memory_handler::write<float>(
			address + offset::cc_brightness_contrast_gamma::contrast, value);
	}

	auto get_red_coeff() const -> float
	{
		return memory_handler::read<float>(
			address + offset::cc_brightness_contrast_gamma::red_coeff);
	}

	auto set_red_coeff(float value)
	{
		return memory_handler::write<float>(
			address + offset::cc_brightness_contrast_gamma::red_coeff, value);
	}

	auto get_green_coeff() const -> float
	{
		return memory_handler::read<float>(
			address + offset::cc_brightness_contrast_gamma::green_coeff);
	}

	auto set_green_coeff(float value)
	{
		return memory_handler::write<float>(
			address + offset::cc_brightness_contrast_gamma::green_coeff, value);
	}

	auto get_blue_coeff() const -> float
	{
		return memory_handler::read<float>(
			address + offset::cc_brightness_contrast_gamma::blue_coeff);
	}

	auto set_blue_coeff(float value)
	{
		return memory_handler::write<float>(
			address + offset::cc_brightness_contrast_gamma::blue_coeff, value);
	}

	auto get_gamma() const -> float
	{
		return memory_handler::read<float>(
			address + offset::cc_brightness_contrast_gamma::gamma);
	}

	auto set_gamma(float value)
	{
		return memory_handler::write<float>(
			address + offset::cc_brightness_contrast_gamma::gamma, value);
	}
};