/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofFbo
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "gl/ofFbo.h"


/** Cast (class_name)
 * 
 */
static int ofFbo__cast_(lua_State *L) {

  ofFbo *self = *((ofFbo **)dub_checksdata_n(L, 1, "ofFbo"));
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

/** ofFbo::ofFbo()
 * api/openFrameworks/gl/ofFbo.h:9
 */
static int ofFbo_ofFbo(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 1) {
      ofFbo *mom = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
      ofFbo *retval__ = new ofFbo(*mom);
      dub_pushudata(L, retval__, "ofFbo", true);
      return 1;
    } else {
      ofFbo *retval__ = new ofFbo();
      dub_pushudata(L, retval__, "ofFbo", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}

/** ofFbo& ofFbo::operator=(const ofFbo &fbo)
 * api/openFrameworks/gl/ofFbo.h:11
 */
static int ofFbo_operator_sete(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    ofFbo *fbo = *((ofFbo **)dub_checksdata(L, 2, "ofFbo"));
    dub_pushudata(L, &self->operator=(*fbo), "ofFbo", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "set: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "set: Unknown exception");
  }
  return dub_error(L);
}

/** virtual ofFbo::~ofFbo()
 * api/openFrameworks/gl/ofFbo.h:12
 */
static int ofFbo__ofFbo(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofFbo"));
    if (userdata->gc) {
      ofFbo *self = (ofFbo *)userdata->ptr;
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

/** void ofFbo::allocate(int width, int height, int internalformat=GL_RGBA, int numSamples=0)
 * api/openFrameworks/gl/ofFbo.h:14
 */
static int ofFbo_allocate(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    int top__ = lua_gettop(L);
    if (top__ >= 5) {
      int width = dub_checkint(L, 2);
      int height = dub_checkint(L, 3);
      int internalformat = dub_checkint(L, 4);
      int numSamples = dub_checkint(L, 5);
      self->allocate(width, height, internalformat, numSamples);
      return 0;
    } else if (top__ >= 4) {
      int width = dub_checkint(L, 2);
      int height = dub_checkint(L, 3);
      int internalformat = dub_checkint(L, 4);
      self->allocate(width, height, internalformat);
      return 0;
    } else if (top__ >= 3) {
      int width = dub_checkint(L, 2);
      int height = dub_checkint(L, 3);
      self->allocate(width, height);
      return 0;
    } else if (top__ >= 2) {
      ofFbo::Settings *settings = *((ofFbo::Settings **)dub_checksdata(L, 2, "ofFbo.Settings"));
      self->allocate(*settings);
      return 0;
    } else {
      self->allocate();
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "allocate: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "allocate: Unknown exception");
  }
  return dub_error(L);
}

/** bool ofFbo::isAllocated()
 * api/openFrameworks/gl/ofFbo.h:17
 */
static int ofFbo_isAllocated(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    lua_pushboolean(L, self->isAllocated());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isAllocated: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isAllocated: Unknown exception");
  }
  return dub_error(L);
}

/** void ofFbo::draw(float x, float y)
 * api/openFrameworks/gl/ofFbo.h:19
 */
static int ofFbo_draw(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    int top__ = lua_gettop(L);
    if (top__ >= 5) {
      float x = dub_checknumber(L, 2);
      float y = dub_checknumber(L, 3);
      float width = dub_checknumber(L, 4);
      float height = dub_checknumber(L, 5);
      self->draw(x, y, width, height);
      return 0;
    } else {
      float x = dub_checknumber(L, 2);
      float y = dub_checknumber(L, 3);
      self->draw(x, y);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "draw: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "draw: Unknown exception");
  }
  return dub_error(L);
}

/** void ofFbo::setAnchorPercent(float xPct, float yPct)
 * api/openFrameworks/gl/ofFbo.h:22
 */
static int ofFbo_setAnchorPercent(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
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

/** void ofFbo::setAnchorPoint(float x, float y)
 * api/openFrameworks/gl/ofFbo.h:23
 */
static int ofFbo_setAnchorPoint(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
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

/** void ofFbo::resetAnchor()
 * api/openFrameworks/gl/ofFbo.h:24
 */
static int ofFbo_resetAnchor(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    self->resetAnchor();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "resetAnchor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "resetAnchor: Unknown exception");
  }
  return dub_error(L);
}

/** void ofFbo::setDefaultTextureIndex(int defaultTexture)
 * api/openFrameworks/gl/ofFbo.h:26
 */
static int ofFbo_setDefaultTextureIndex(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    int defaultTexture = dub_checkint(L, 2);
    self->setDefaultTextureIndex(defaultTexture);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setDefaultTextureIndex: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setDefaultTextureIndex: Unknown exception");
  }
  return dub_error(L);
}

/** int ofFbo::getDefaultTextureIndex()
 * api/openFrameworks/gl/ofFbo.h:27
 */
static int ofFbo_getDefaultTextureIndex(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    lua_pushnumber(L, self->getDefaultTextureIndex());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getDefaultTextureIndex: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getDefaultTextureIndex: Unknown exception");
  }
  return dub_error(L);
}

/** ofTexture& ofFbo::getTextureReference()
 * api/openFrameworks/gl/ofFbo.h:29
 */
static int ofFbo_getTextureReference(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    int top__ = lua_gettop(L);
    if (top__ >= 2) {
      int attachmentPoint = dub_checkint(L, 2);
      dub_pushudata(L, &self->getTextureReference(attachmentPoint), "ofTexture", false);
      return 1;
    } else {
      dub_pushudata(L, &self->getTextureReference(), "ofTexture", false);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "getTextureReference: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getTextureReference: Unknown exception");
  }
  return dub_error(L);
}

/** ofTexture& ofFbo::getDepthTexture()
 * api/openFrameworks/gl/ofFbo.h:31
 */
static int ofFbo_getDepthTexture(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    dub_pushudata(L, &self->getDepthTexture(), "ofTexture", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getDepthTexture: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getDepthTexture: Unknown exception");
  }
  return dub_error(L);
}

/** void ofFbo::setUseTexture(bool bUseTex)
 * api/openFrameworks/gl/ofFbo.h:32
 */
static int ofFbo_setUseTexture(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
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

/** void ofFbo::begin(bool setupScreen=true)
 * api/openFrameworks/gl/ofFbo.h:34
 */
static int ofFbo_begin(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    int top__ = lua_gettop(L);
    if (top__ >= 2) {
      bool setupScreen = dub_checkboolean(L, 2);
      self->begin(setupScreen);
      return 0;
    } else {
      self->begin();
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "begin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "begin: Unknown exception");
  }
  return dub_error(L);
}

/** void ofFbo::end()
 * api/openFrameworks/gl/ofFbo.h:35
 */
static int ofFbo_end(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    self->end();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "end: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "end: Unknown exception");
  }
  return dub_error(L);
}

/** void ofFbo::readToPixels(ofPixels &pixels, int attachmentPoint=0)
 * api/openFrameworks/gl/ofFbo.h:37
 */
static int ofFbo_readToPixels(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    int top__ = lua_gettop(L);
    if (top__ >= 3) {
      int type__ = lua_type(L, 2);
      void **ptr2__;
      if ( (ptr2__ = dub_issdata(L, 2, "ofShortPixels", type__)) ) {
        ofShortPixels *pixels = *((ofShortPixels **)ptr2__);
        int attachmentPoint = dub_checkint(L, 3);
        self->readToPixels(*pixels, attachmentPoint);
        return 0;
      } else if ( (ptr2__ = dub_issdata(L, 2, "ofPixels", type__)) ) {
        ofPixels *pixels = *((ofPixels **)ptr2__);
        int attachmentPoint = dub_checkint(L, 3);
        self->readToPixels(*pixels, attachmentPoint);
        return 0;
      } else {
        ofFloatPixels *pixels = *((ofFloatPixels **)dub_checksdata(L, 2, "ofFloatPixels"));
        int attachmentPoint = dub_checkint(L, 3);
        self->readToPixels(*pixels, attachmentPoint);
        return 0;
      }
    } else {
      int type__ = lua_type(L, 2);
      void **ptr2__;
      if ( (ptr2__ = dub_issdata(L, 2, "ofShortPixels", type__)) ) {
        ofShortPixels *pixels = *((ofShortPixels **)ptr2__);
        self->readToPixels(*pixels);
        return 0;
      } else if ( (ptr2__ = dub_issdata(L, 2, "ofPixels", type__)) ) {
        ofPixels *pixels = *((ofPixels **)ptr2__);
        self->readToPixels(*pixels);
        return 0;
      } else {
        ofFloatPixels *pixels = *((ofFloatPixels **)dub_checksdata(L, 2, "ofFloatPixels"));
        self->readToPixels(*pixels);
        return 0;
      }
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "readToPixels: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "readToPixels: Unknown exception");
  }
  return dub_error(L);
}

/** float ofFbo::getWidth()
 * api/openFrameworks/gl/ofFbo.h:41
 */
static int ofFbo_getWidth(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    lua_pushnumber(L, self->getWidth());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getWidth: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getWidth: Unknown exception");
  }
  return dub_error(L);
}

/** float ofFbo::getHeight()
 * api/openFrameworks/gl/ofFbo.h:42
 */
static int ofFbo_getHeight(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    lua_pushnumber(L, self->getHeight());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getHeight: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getHeight: Unknown exception");
  }
  return dub_error(L);
}

/** void ofFbo::bind()
 * api/openFrameworks/gl/ofFbo.h:45
 */
static int ofFbo_bind(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    self->bind();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "bind: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "bind: Unknown exception");
  }
  return dub_error(L);
}

/** void ofFbo::unbind()
 * api/openFrameworks/gl/ofFbo.h:46
 */
static int ofFbo_unbind(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    self->unbind();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "unbind: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "unbind: Unknown exception");
  }
  return dub_error(L);
}

/** int ofFbo::getNumTextures()
 * api/openFrameworks/gl/ofFbo.h:48
 */
static int ofFbo_getNumTextures(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    lua_pushnumber(L, self->getNumTextures());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getNumTextures: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getNumTextures: Unknown exception");
  }
  return dub_error(L);
}

/** void ofFbo::setActiveDrawBuffer(int i)
 * api/openFrameworks/gl/ofFbo.h:50
 */
static int ofFbo_setActiveDrawBuffer(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    int i = dub_checkint(L, 2);
    self->setActiveDrawBuffer(i);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setActiveDrawBuffer: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setActiveDrawBuffer: Unknown exception");
  }
  return dub_error(L);
}

/** void ofFbo::setActiveDrawBuffers(const vector< int > &i)
 * api/openFrameworks/gl/ofFbo.h:51
 */
static int ofFbo_setActiveDrawBuffers(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    vector< int > *i = *((vector< int > **)dub_checksdata(L, 2, "vector< int >"));
    self->setActiveDrawBuffers(*i);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setActiveDrawBuffers: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setActiveDrawBuffers: Unknown exception");
  }
  return dub_error(L);
}

/** void ofFbo::activateAllDrawBuffers()
 * api/openFrameworks/gl/ofFbo.h:52
 */
static int ofFbo_activateAllDrawBuffers(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    self->activateAllDrawBuffers();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "activateAllDrawBuffers: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "activateAllDrawBuffers: Unknown exception");
  }
  return dub_error(L);
}

/** GLuint ofFbo::getFbo()
 * api/openFrameworks/gl/ofFbo.h:54
 */
static int ofFbo_getFbo(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    lua_pushnumber(L, self->getFbo());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getFbo: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getFbo: Unknown exception");
  }
  return dub_error(L);
}

/** GLuint ofFbo::getDepthBuffer()
 * api/openFrameworks/gl/ofFbo.h:62
 */
static int ofFbo_getDepthBuffer(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    lua_pushnumber(L, self->getDepthBuffer());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getDepthBuffer: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getDepthBuffer: Unknown exception");
  }
  return dub_error(L);
}

/** GLuint ofFbo::getStencilBuffer()
 * api/openFrameworks/gl/ofFbo.h:63
 */
static int ofFbo_getStencilBuffer(lua_State *L) {
  try {
    ofFbo *self = *((ofFbo **)dub_checksdata(L, 1, "ofFbo"));
    lua_pushnumber(L, self->getStencilBuffer());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getStencilBuffer: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getStencilBuffer: Unknown exception");
  }
  return dub_error(L);
}

/** static bool ofFbo::checkGLSupport()
 * api/openFrameworks/gl/ofFbo.h:57
 */
static int ofFbo_checkGLSupport(lua_State *L) {
  try {
    lua_pushboolean(L, ofFbo::checkGLSupport());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "checkGLSupport: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "checkGLSupport: Unknown exception");
  }
  return dub_error(L);
}

/** static int ofFbo::maxColorAttachments()
 * api/openFrameworks/gl/ofFbo.h:58
 */
static int ofFbo_maxColorAttachments(lua_State *L) {
  try {
    lua_pushnumber(L, ofFbo::maxColorAttachments());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "maxColorAttachments: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "maxColorAttachments: Unknown exception");
  }
  return dub_error(L);
}

/** static int ofFbo::maxDrawBuffers()
 * api/openFrameworks/gl/ofFbo.h:59
 */
static int ofFbo_maxDrawBuffers(lua_State *L) {
  try {
    lua_pushnumber(L, ofFbo::maxDrawBuffers());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "maxDrawBuffers: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "maxDrawBuffers: Unknown exception");
  }
  return dub_error(L);
}

/** static int ofFbo::maxSamples()
 * api/openFrameworks/gl/ofFbo.h:60
 */
static int ofFbo_maxSamples(lua_State *L) {
  try {
    lua_pushnumber(L, ofFbo::maxSamples());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "maxSamples: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "maxSamples: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofFbo___tostring(lua_State *L) {
  ofFbo *self = *((ofFbo **)dub_checksdata_n(L, 1, "ofFbo"));
  lua_pushfstring(L, "ofFbo: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofFbo_member_methods[] = {
  { "_cast_"       , ofFbo__cast_         },
  { "new"          , ofFbo_ofFbo          },
  { "set"          , ofFbo_operator_sete  },
  { "__gc"         , ofFbo__ofFbo         },
  { "allocate"     , ofFbo_allocate       },
  { "isAllocated"  , ofFbo_isAllocated    },
  { "draw"         , ofFbo_draw           },
  { "setAnchorPercent", ofFbo_setAnchorPercent },
  { "setAnchorPoint", ofFbo_setAnchorPoint },
  { "resetAnchor"  , ofFbo_resetAnchor    },
  { "setDefaultTextureIndex", ofFbo_setDefaultTextureIndex },
  { "getDefaultTextureIndex", ofFbo_getDefaultTextureIndex },
  { "getTextureReference", ofFbo_getTextureReference },
  { "getDepthTexture", ofFbo_getDepthTexture },
  { "setUseTexture", ofFbo_setUseTexture  },
  { "begin"        , ofFbo_begin          },
  { "finish"          , ofFbo_end            },
  { "readToPixels" , ofFbo_readToPixels   },
  { "getWidth"     , ofFbo_getWidth       },
  { "getHeight"    , ofFbo_getHeight      },
  { "bind"         , ofFbo_bind           },
  { "unbind"       , ofFbo_unbind         },
  { "getNumTextures", ofFbo_getNumTextures },
  { "setActiveDrawBuffer", ofFbo_setActiveDrawBuffer },
  { "setActiveDrawBuffers", ofFbo_setActiveDrawBuffers },
  { "activateAllDrawBuffers", ofFbo_activateAllDrawBuffers },
  { "getFbo"       , ofFbo_getFbo         },
  { "getDepthBuffer", ofFbo_getDepthBuffer },
  { "getStencilBuffer", ofFbo_getStencilBuffer },
  { "checkGLSupport", ofFbo_checkGLSupport },
  { "maxColorAttachments", ofFbo_maxColorAttachments },
  { "maxDrawBuffers", ofFbo_maxDrawBuffers },
  { "maxSamples"   , ofFbo_maxSamples     },
  { "__tostring"   , ofFbo___tostring     },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofFbo(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofFbo");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofFbo_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofFbo", "ofFbo");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
