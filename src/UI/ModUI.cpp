#include "QuestUI/shared/BeatSaberUI.hpp"
using namespace QuestUI;

#include "ModConfig.hpp"

#include "UI/ModUI.hpp"
using namespace AIMod::UI;
DEFINE_TYPE(AIMod::UI, AIModUI);

void AIModUI::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) 
{
    if (firstActivation) {
        auto scrollView = BeatSaberUI::CreateScrollView(get_transform());
        BeatSaberUI::CreateText(scrollView->get_transform(), "Generated by AI!");

        BeatSaberUI::CreateToggle(scrollView->get_transform(), "Enable AI Mod", getModConfig().enable.GetValue(), [](bool value) {
            getModConfig().enable.SetValue(value);
        });
    }
}


// Written mostly by AI