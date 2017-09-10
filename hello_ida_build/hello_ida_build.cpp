// hello_ida_build.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <pro.h>
#include <ida.hpp>
#include <idp.hpp>
#include <loader.hpp>
#include <kernwin.hpp>
#include <graph.hpp>



static const char PLUGINNAME[] = "HelloIdaBuild";
static const char wanted_name[] = "HelloIdaBuild";
static const char comment[] = "HelloIdaBuild Test";
static const char help[] = "Just a hello world for IDA plugins, and testing various build options\n";


int idaapi init(void) {
    msg("%s: init\n", PLUGINNAME);
    return PLUGIN_KEEP;
}

void idaapi term(void) {
    msg("%s: term\n", PLUGINNAME);
}

void idaapi run(int) {
    msg("%s: run\n", PLUGINNAME);
}


plugin_t PLUGIN = {
    IDP_INTERFACE_VERSION,
    0,                    // plugin flags
    init,                 // initialize
    term,                 // terminate. this pointer may be NULL.
    run,                  // invoke plugin
    comment,              // long comment about the plugin
    help,                 // multiline help about the plugin
    wanted_name,          // the preferred short name of the plugin
    NULL                  // the preferred hotkey to run the plugin
};