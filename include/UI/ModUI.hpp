#pragma once

#include "main.hpp"
#include "custom-types/shared/macros.hpp"
#include "UnityEngine/MonoBehaviour.hpp"
#include "HMUI/ViewController.hpp"

DECLARE_CLASS_CODEGEN(AIMod::UI, AIModUI, HMUI::ViewController,
  public:
    virtual void DidActivate(bool firstActivation);
)


// Written by AI