#include "plugin.h"
#include "Settings.h"

void Settings::Read() {
#ifdef GTA3
    plugin::config_file config(PLUGIN_PATH("ClassicAxisIII.ini"));
#else
    plugin::config_file config(PLUGIN_PATH("ClassicAxisVC.ini"));
#endif

    forceAutoAim = config["ForceAutoAim"].asBool(false);
    lcsTargetSystem = config["LCSTargetSystem"].asBool(true);
    altKeyWalk = config["EnableLAltKeyWalk"].asBool(true);
}