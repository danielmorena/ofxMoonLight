/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofAbstractImage
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "api/openFrameworks/types/ofBaseTypes.h"


/** Cast (class_name)
 * 
 */
static int ofAbstractImage__cast_(lua_State *L) {

  ofAbstractImage *self = *((ofAbstractImage **)dub_checksdata_n(L, 1, "ofAbstractImage"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub_hash(key, 3);
  switch(key_h) {
    case 0: {
      if (DUB_ASSERT_KEY(key, "ofBaseDraws")) break;
      *retval__ = static_cast<ofBaseDraws *>(self);
      return 1;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "ofBaseHasTexture")) break;
      *retval__ = static_cast<ofBaseHasTexture *>(self);
      return 1;
    }
  }
  return 0;
}

/** ofAbstractImage()
 * 
 */
static int ofAbstractImage_ofAbstractImage(lua_State *L) {
  try {
    ofAbstractImage *retval__ = new ofAbstractImage();
    dub_pushudata(L, retval__, "ofAbstractImage", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}

/** virtual ofAbstractImage::~ofAbstractImage()
 * api/openFrameworks/types/ofBaseTypes.h:112
 */
static int ofAbstractImage__ofAbstractImage(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofAbstractImage"));
    if (userdata->gc) {
      ofAbstractImage *self = (ofAbstractImage *)userdata->ptr;
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

/** virtual void ofBaseDraws::draw(float x, float y)=0
 * api/openFrameworks/types/ofBaseTypes.h:41
 */
static int ofAbstractImage_draw(lua_State *L) {
  try {
    ofAbstractImage *self = *((ofAbstractImage **)dub_checksdata(L, 1, "ofAbstractImage"));
    int top__ = lua_gettop(L);
    if (top__ >= 5) {
      float x = dub_checknumber(L, 2);
      float y = dub_checknumber(L, 3);
      float w = dub_checknumber(L, 4);
      float h = dub_checknumber(L, 5);
      self->draw(x, y, w, h);
      return 0;
    } else if (top__ >= 4) {
      ofVec3f *point = *((ofVec3f **)dub_checksdata(L, 2, "ofVec3f"));
      float w = dub_checknumber(L, 3);
      float h = dub_checknumber(L, 4);
      self->draw(*point, w, h);
      return 0;
    } else if (top__ >= 3) {
      float x = dub_checknumber(L, 2);
      float y = dub_checknumber(L, 3);
      self->draw(x, y);
      return 0;
    } else {
      int type__ = lua_type(L, 2);
      void **ptr2__;
      if ( (ptr2__ = dub_issdata(L, 2, "ofVec3f", type__)) ) {
        ofVec3f *point = *((ofVec3f **)ptr2__);
        self->draw(*point);
        return 0;
      } else {
        ofRectangle *rect = *((ofRectangle **)dub_checksdata(L, 2, "ofRectangle"));
        self->draw(*rect);
        return 0;
      }
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "draw: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "draw: Unknown exception");
  }
  return dub_error(L);
}

/** virtual float ofBaseDraws::getHeight()=0
 * api/openFrameworks/types/ofBaseTypes.h:53
 */
static int ofAbstractImage_getHeight(lua_State *L) {
  try {
    ofAbstractImage *self = *((ofAbstractImage **)dub_checksdata(L, 1, "ofAbstractImage"));
    lua_pushnumber(L, self->getHeight());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getHeight: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getHeight: Unknown exception");
  }
  return dub_error(L);
}

/** virtual float ofBaseDraws::getWidth()=0
 * api/openFrameworks/types/ofBaseTypes.h:54
 */
static int ofAbstractImage_getWidth(lua_State *L) {
  try {
    ofAbstractImage *self = *((ofAbstractImage **)dub_checksdata(L, 1, "ofAbstractImage"));
    lua_pushnumber(L, self->getWidth());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getWidth: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getWidth: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseDraws::setAnchorPercent(float xPct, float yPct)
 * api/openFrameworks/types/ofBaseTypes.h:56
 */
static int ofAbstractImage_setAnchorPercent(lua_State *L) {
  try {
    ofAbstractImage *self = *((ofAbstractImage **)dub_checksdata(L, 1, "ofAbstractImage"));
    float xPct = dub_checknumber(L, 2);
    float yPct = dub_checknumber(L, 3);
    self->setAnchorPercent(xPct, yPct);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setAnchorPercent: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setAnchorPercent: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseDraws::setAnchorPoint(float x, float y)
 * api/openFrameworks/types/ofBaseTypes.h:57
 */
static int ofAbstractImage_setAnchorPoint(lua_State *L) {
  try {
    ofAbstractImage *self = *((ofAbstractImage **)dub_checksdata(L, 1, "ofAbstractImage"));
    float x = dub_checknumber(L, 2);
    float y = dub_checknumber(L, 3);
    self->setAnchorPoint(x, y);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setAnchorPoint: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setAnchorPoint: Unknown exception");
  }
  return dub_error(L);
}

/** virtual void ofBaseDraws::resetAnchor()
 * api/openFrameworks/types/ofBaseTypes.h:58
 */
static int ofAbstractImage_resetAnchor(lua_State *L) {
  try {
    ofAbstractImage *self = *((ofAbstractImage **)dub_checksdata(L, 1, "ofAbstractImage"));
    self->resetAnchor();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "resetAnchor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "resetAnchor: Unknown exception");
  }
  return dub_error(L);
}

/** virtual ofTexture& ofBaseHasTexture::getTextureReference()=0
 * api/openFrameworks/types/ofBaseTypes.h:81
 */
static int ofAbstractImage_getTextureReference(lua_State *L) {
  try {
    ofAbstractImage *self = *((ofAbstractImage **)dub_checksdata(L, 1, "ofAbstractImage"));
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
static int ofAbstractImage_setUseTexture(lua_State *L) {
  try {
    ofAbstractImage *self = *((ofAbstractImage **)dub_checksdata(L, 1, "ofAbstractImage"));
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
static int ofAbstractImage___tostring(lua_State *L) {
  ofAbstractImage *self = *((ofAbstractImage **)dub_checksdata_n(L, 1, "ofAbstractImage"));
  lua_pushfstring(L, "ofAbstractImage: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofAbstractImage_member_methods[] = {
  { "_cast_"       , ofAbstractImage__cast_ },
  { "new"          , ofAbstractImage_ofAbstractImage },
  { "__gc"         , ofAbstractImage__ofAbstractImage },
  { "draw"         , ofAbstractImage_draw },
  { "getHeight"    , ofAbstractImage_getHeight },
  { "getWidth"     , ofAbstractImage_getWidth },
  { "setAnchorPercent", ofAbstractImage_setAnchorPercent },
  { "setAnchorPoint", ofAbstractImage_setAnchorPoint },
  { "resetAnchor"  , ofAbstractImage_resetAnchor },
  { "getTextureReference", ofAbstractImage_getTextureReference },
  { "setUseTexture", ofAbstractImage_setUseTexture },
  { "__tostring"   , ofAbstractImage___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofAbstractImage(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofAbstractImage");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofAbstractImage_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofAbstractImage", "ofAbstractImage");
  // <mt>
  lua_pop(L, 1);
  return 0;
}