#pragma once

#include "common.h"

namespace PyMKF {

// Settings and defaults
py::dict get_constants();
py::dict get_defaults();
json get_settings();
void set_settings(json settingsJson);
void reset_settings();
json get_default_models();

// Model enumeration functions
std::vector<std::string> get_all_magnetic_field_strength_models();
std::vector<std::string> get_all_fringing_effect_models();
std::vector<std::string> get_all_reluctance_models();
std::vector<std::string> get_all_stray_capacitance_models();
std::vector<std::string> get_all_winding_proximity_effect_models();
std::vector<std::string> get_all_winding_skin_effect_models();

void register_settings_bindings(py::module& m);

} // namespace PyMKF
