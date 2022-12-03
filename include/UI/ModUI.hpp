#pragma once

#include "main.hpp"
#include "custom-types/shared/macros.hpp"
#include "UnityEngine/MonoBehaviour.hpp"
#include "HMUI/ViewController.hpp"

DECLARE_CLASS_CODEGEN(AIMod::UI, AIModUI, HMUI::ViewController,
  DECLARE_OVERRIDE_METHOD(void, DidActivate, il2cpp_utils::FindMethodUnsafe("HMUI", "ViewController", "DidActivate", 3), bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
)


// Written by AI, some stuff done manually