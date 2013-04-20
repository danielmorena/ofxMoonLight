/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofBaseHasTexture
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "api/openFrameworks/types/ofBaseTypes.h"


/** virtual ofBaseHasTexture::~ofBaseHasTexture()
 * api/openFrameworks/types/ofBaseTypes.h:80
 */
static int ofBaseHasTexture__ofBaseHasTexture(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofBaseHasTexture"));
    if (userdata->gc) {
      ofBaseHasTexture *self = (ofBaseHasTexture *)userdata->ptr;
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

/** virtual ofTexture& ofBaseHasTexture::getTextureReference()=0
 * api/openFrameworks/types/ofBaseTypes.h:81
 */
static int ofBaseHasTexture_getTextureReference(lua_State *L) {
  try {
    ofBaseHasTexture *self = *((ofBaseHasTexture **)dub_checksdata(L, 1, "ofBaseHasTexture"));
    dub_pushudata(L, &self->getTextureReference(), "ofTexture", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getTextureReference: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getTextureReference: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseHasTexture::setUseTexture(bool bUseTex)=0
 * api/openFrameworks/types/ofBaseTypes.h:82
 */
static int ofBaseHasTexture_setUseTexture(lua_State *L) {
  try {
    ofBaseHasTexture *self = *((ofBaseHasTexture **)dub_checksdata(L, 1, "ofBaseHasTexture"));
    bool bUseTex = dub_checkboolean(L, 2);
    self->setUseTexture(bUseTex);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setUseTexture: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setUseTexture: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofBaseHasTexture___tostring(lua_State *L) {
  ofBaseHasTexture *self = *((ofBaseHasTexture **)dub_checksdata_n(L, 1, "ofBaseHasTexture"));
  lua_pushfstring(L, "ofBaseHasTexture: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofBaseHasTexture_member_methods[] = {
  { "__gc"         , ofBaseHasTexture__ofBaseHasTexture },
  { "getTextureReference", ofBaseHasTexture_getTextureReference },
  { "setUseTexture", ofBaseHasTexture_setUseTexture },
  { "__tostring"   , ofBaseHasTexture___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofBaseHasTexture(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofBaseHasTexture");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofBaseHasTexture_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofBaseHasTexture", "ofBaseHasTexture");
  // <mt>
  lua_pop(L, 1);
  return 0;
}