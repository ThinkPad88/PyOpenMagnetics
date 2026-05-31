#pragma once
#include "common.h"

namespace PyMKF {

// Core plotting functions
json plot_core(json magneticJson, std::string outputPath = "");
json plot_magnetic(json magneticJson, std::string outputPath = "");
json plot_magnetic_field(json magneticJson, json operatingPointJson, std::string outputPath = "");
json plot_electric_field(json magneticJson, json operatingPointJson, std::string outputPath = "");
json plot_wire(json wireDataJson, std::string outputPath = "");
json plot_bobbin(json magneticJson, std::string outputPath = "");
json plot_sections(json magneticJson, std::string outputPath = "");
json plot_layers(json magneticJson, std::string outputPath = "");
json plot_turns(json magneticJson, std::string outputPath = "");
json plot_wire_losses(json magneticJson, json operatingPointJson, std::string outputPath = "");
json plot_temperature_field(json magneticJson, json operatingPointJson, std::string textColor, std::string bgColor, std::string outputPath = "");

// Register all plotting bindings
void register_plotting_bindings(py::module& m);

} // namespace PyMKF