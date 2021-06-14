#include "globals.h"
#include "permanent_storage.h"

namespace modules {
namespace globals {

void Globals::Init() {
    modules::permanent_storage::FilamentLoaded::get(activeSlot); //@@TODO check for errors
    // @@TODO where to obtain information whether a slot is loaded with a filament?
}

uint8_t Globals::ActiveSlot() const {
    return activeSlot;
}

void Globals::SetActiveSlot(uint8_t newActiveSlot) {
    activeSlot = newActiveSlot;
    modules::permanent_storage::FilamentLoaded::set(activeSlot);
}

bool Globals::FilamentLoaded() const {
    return filamentLoaded;
}

void Globals::SetFilamentLoaded(bool newFilamentLoaded) {
    filamentLoaded = newFilamentLoaded;
}

} // namespace globals
} // namespace modules
