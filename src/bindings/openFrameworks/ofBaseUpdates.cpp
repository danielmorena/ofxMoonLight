/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofBaseUpdates
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "api/openFrameworks/types/ofBaseTypes.h"


/** virtual ofBaseUpdates::~ofBaseUpdates()
 * api/openFrameworks/types/ofBaseTypes.h:68
 */
static int ofBaseUpdates__ofBaseUpdates(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofBaseUpdates"));
    if (userdata->gc) {
      ofBaseUpdates *self = (ofBaseUpdates *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__gc: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__gc: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseUpdates::update()=0
 * api/openFrameworks/types/ofBaseTypes.h:69
 */
static int ofBaseUpdates_update(lua_State *L) {
  try {
    ofBaseUpdates *self = *((ofBaseUpdates **)dub_checksdata(L, 1, "ofBaseUpdates"));
    self->update();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "update: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "update: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofBaseUpdates___tostring(lua_State *L) {
  ofBaseUpdates *self = *((ofBaseUpdates **)dub_checksdata_n(L, 1, "ofBaseUpdates"));
  lua_pushfstring(L, "ofBaseUpdates: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofBaseUpdates_member_methods[] = {
  { "__gc"         , ofBaseUpdates__ofBaseUpdates },
  { "update"       , ofBaseUpdates_update },
  { "__tostring"   , ofBaseUpdates___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofBaseUpdates(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofBaseUpdates");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofBaseUpdates_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofBaseUpdates", "ofBaseUpdates");
  // <mt>
  lua_pop(L, 1);
  return 0;
}