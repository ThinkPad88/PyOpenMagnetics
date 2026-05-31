#pragma once

#include "common.h"

namespace PyMKF {

json get_bobbins();
json get_bobbin_names();
json find_bobbin_by_name(json bobbinName);
json create_basic_bobbin(json coreDataJson, bool nullDimensions);
json create_basic_bobbin_by_thickness(json coreDataJson, double thickness);
json calculate_bobbin_data(json magneticJson);
json process_bobbin(json bobbinJson);
bool check_if_fits(json bobbinJson, double dimension, bool isHorizontalOrRadial);

// Simple bobbin creation
json create_simple_bobbin_from_core(json coreJson);
json create_simple_bobbin_from_core_with_custom_thickness(json coreJson, double thickness);
json create_simple_bobbin_from_core_with_custom_thicknesses(json coreJson, double wallThickness, double columnThickness);

void register_bobbin_bindings(py::module& m);

} // namespace PyMKF
