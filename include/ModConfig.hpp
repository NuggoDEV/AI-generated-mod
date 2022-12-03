#pragma once

#include "config-utils/shared/config-utils.hpp"

DECLARE_CONFIG(ModConfig,
    CONFIG_VALUE(enable, bool, "Enable AI Mod", false);
)

// Written by AI, switched "enable" and "bool" around manually as the AI didn't want to lol