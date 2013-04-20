/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class ofPixels
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "graphics/ofPixels.h"


/** ofPixels::ofPixels()
 * api/openFrameworks/graphics/ofPixels.h:22
 */
static int ofPixels_ofPixels(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 1) {
      ofPixels *mom = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
      ofPixels *retval__ = new ofPixels(*mom);
      dub_pushudata(L, retval__, "ofPixels", true);
      return 1;
    } else {
      ofPixels *retval__ = new ofPixels();
      dub_pushudata(L, retval__, "ofPixels", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}

/** ofPixels::~ofPixels()
 * api/openFrameworks/graphics/ofPixels.h:23
 */
static int ofPixels__ofPixels(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub_checksdata_d(L, 1, "ofPixels"));
    if (userdata->gc) {
      ofPixels *self = (ofPixels *)userdata->ptr;
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

/** ofPixels& ofPixels::operator=(const ofPixels &mom)
 * api/openFrameworks/graphics/ofPixels.h:25
 */
static int ofPixels_operator_sete(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    ofPixels *mom = *((ofPixels **)dub_checksdata(L, 2, "ofPixels"));
    dub_pushudata(L, &self->operator=(*mom), "ofPixels", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "set: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "set: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPixels::allocate(int w, int h, int channels)
 * api/openFrameworks/graphics/ofPixels.h:27
 */
static int ofPixels_allocate(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    int w = dub_checkint(L, 2);
    int h = dub_checkint(L, 3);
    int channels = dub_checkint(L, 4);
    self->allocate(w, h, channels);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "allocate: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "allocate: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPixels::set(unsigned char val)
 * api/openFrameworks/graphics/ofPixels.h:29
 */
static int ofPixels_set(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    int top__ = lua_gettop(L);
    if (top__ >= 3) {
      int channel = dub_checkint(L, 2);
      unsigned char val = dub_checkint(L, 3);
      self->set(channel, val);
      return 0;
    } else {
      unsigned char val = dub_checkint(L, 2);
      self->set(val);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "set: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "set: Unknown exception");
  }
  return dub_error(L);
}

///** void ofPixels::setFromPixels(const unsigned char *newPixels, int w, int h, int channels)
// * api/openFrameworks/graphics/ofPixels.h:31
// */
//static int ofPixels_setFromPixels(lua_State *L) {
//  try {
//    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
//    const unsigned char *newPixels = dub_checkstring(L, 2);
//    int w = dub_checkint(L, 3);
//    int h = dub_checkint(L, 4);
//    int channels = dub_checkint(L, 5);
//    self->setFromPixels(newPixels, w, h, channels);
//    return 0;
//  } catch (std::exception &e) {
//    lua_pushfstring(L, "setFromPixels: %s", e.what());
//  } catch (...) {
//    lua_pushfstring(L, "setFromPixels: Unknown exception");
//  }
//  return dub_error(L);
//}
//
///** void ofPixels::setFromExternalPixels(unsigned char *newPixels, int w, int h, int channels)
// * api/openFrameworks/graphics/ofPixels.h:32
// */
//static int ofPixels_setFromExternalPixels(lua_State *L) {
//  try {
//    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
//    unsigned char *newPixels = dub_checkstring(L, 2);
//    int w = dub_checkint(L, 3);
//    int h = dub_checkint(L, 4);
//    int channels = dub_checkint(L, 5);
//    self->setFromExternalPixels(newPixels, w, h, channels);
//    return 0;
//  } catch (std::exception &e) {
//    lua_pushfstring(L, "setFromExternalPixels: %s", e.what());
//  } catch (...) {
//    lua_pushfstring(L, "setFromExternalPixels: Unknown exception");
//  }
//  return dub_error(L);
//}
//
///** void ofPixels::setFromAlignedPixels(const unsigned char *newPixels, int width, int height, int channels, int stride)
// * api/openFrameworks/graphics/ofPixels.h:33
// */
//static int ofPixels_setFromAlignedPixels(lua_State *L) {
//  try {
//    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
//    const unsigned char *newPixels = dub_checkstring(L, 2);
//    int width = dub_checkint(L, 3);
//    int height = dub_checkint(L, 4);
//    int channels = dub_checkint(L, 5);
//    int stride = dub_checkint(L, 6);
//    self->setFromAlignedPixels(newPixels, width, height, channels, stride);
//    return 0;
//  } catch (std::exception &e) {
//    lua_pushfstring(L, "setFromAlignedPixels: %s", e.what());
//  } catch (...) {
//    lua_pushfstring(L, "setFromAlignedPixels: Unknown exception");
//  }
//  return dub_error(L);
//}

/** void ofPixels::swap(ofPixels &pix)
 * api/openFrameworks/graphics/ofPixels.h:34
 */
static int ofPixels_swap(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    ofPixels *pix = *((ofPixels **)dub_checksdata(L, 2, "ofPixels"));
    self->swap(*pix);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "swap: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "swap: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPixels::crop(int x, int y, int width, int height)
 * api/openFrameworks/graphics/ofPixels.h:38
 */
static int ofPixels_crop(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    int x = dub_checkint(L, 2);
    int y = dub_checkint(L, 3);
    int width = dub_checkint(L, 4);
    int height = dub_checkint(L, 5);
    self->crop(x, y, width, height);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "crop: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "crop: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPixels::cropTo(ofPixels &toPix, int x, int y, int _width, int _height)
 * api/openFrameworks/graphics/ofPixels.h:41
 */
static int ofPixels_cropTo(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    ofPixels *toPix = *((ofPixels **)dub_checksdata(L, 2, "ofPixels"));
    int x = dub_checkint(L, 3);
    int y = dub_checkint(L, 4);
    int _width = dub_checkint(L, 5);
    int _height = dub_checkint(L, 6);
    self->cropTo(*toPix, x, y, _width, _height);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "cropTo: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "cropTo: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPixels::rotate90(int nClockwiseRotations)
 * api/openFrameworks/graphics/ofPixels.h:44
 */
static int ofPixels_rotate90(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    int nClockwiseRotations = dub_checkint(L, 2);
    self->rotate90(nClockwiseRotations);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "rotate90: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "rotate90: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPixels::rotate90To(ofPixels &dst, int nClockwiseRotations)
 * api/openFrameworks/graphics/ofPixels.h:45
 */
static int ofPixels_rotate90To(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    ofPixels *dst = *((ofPixels **)dub_checksdata(L, 2, "ofPixels"));
    int nClockwiseRotations = dub_checkint(L, 3);
    self->rotate90To(*dst, nClockwiseRotations);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "rotate90To: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "rotate90To: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPixels::mirrorTo(ofPixels &dst, bool vertically, bool horizontal)
 * api/openFrameworks/graphics/ofPixels.h:46
 */
static int ofPixels_mirrorTo(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    ofPixels *dst = *((ofPixels **)dub_checksdata(L, 2, "ofPixels"));
    bool vertically = dub_checkboolean(L, 3);
    bool horizontal = dub_checkboolean(L, 4);
    self->mirrorTo(*dst, vertically, horizontal);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "mirrorTo: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "mirrorTo: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPixels::mirror(bool vertically, bool horizontal)
 * api/openFrameworks/graphics/ofPixels.h:47
 */
static int ofPixels_mirror(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    bool vertically = dub_checkboolean(L, 2);
    bool horizontal = dub_checkboolean(L, 3);
    self->mirror(vertically, horizontal);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "mirror: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "mirror: Unknown exception");
  }
  return dub_error(L);
}

/** bool ofPixels::resize(int dstWidth, int dstHeight, ofInterpolationMethod interpMethod=OF_INTERPOLATE_NEAREST_NEIGHBOR)
 * api/openFrameworks/graphics/ofPixels.h:48
 */
static int ofPixels_resize(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    int top__ = lua_gettop(L);
    if (top__ >= 4) {
      int dstWidth = dub_checkint(L, 2);
      int dstHeight = dub_checkint(L, 3);
      ofInterpolationMethod interpMethod = (ofInterpolationMethod)dub_checkint(L, 4);
      lua_pushboolean(L, self->resize(dstWidth, dstHeight, interpMethod));
      return 1;
    } else {
      int dstWidth = dub_checkint(L, 2);
      int dstHeight = dub_checkint(L, 3);
      lua_pushboolean(L, self->resize(dstWidth, dstHeight));
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "resize: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "resize: Unknown exception");
  }
  return dub_error(L);
}

/** bool ofPixels::resizeTo(ofPixels &dst, ofInterpolationMethod interpMethod=OF_INTERPOLATE_NEAREST_NEIGHBOR)
 * api/openFrameworks/graphics/ofPixels.h:49
 */
static int ofPixels_resizeTo(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    int top__ = lua_gettop(L);
    if (top__ >= 3) {
      ofPixels *dst = *((ofPixels **)dub_checksdata(L, 2, "ofPixels"));
      ofInterpolationMethod interpMethod = (ofInterpolationMethod)dub_checkint(L, 3);
      lua_pushboolean(L, self->resizeTo(*dst, interpMethod));
      return 1;
    } else {
      ofPixels *dst = *((ofPixels **)dub_checksdata(L, 2, "ofPixels"));
      lua_pushboolean(L, self->resizeTo(*dst));
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "resizeTo: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "resizeTo: Unknown exception");
  }
  return dub_error(L);
}

/** bool ofPixels::pasteInto(ofPixels &dst, int x, int y)
 * api/openFrameworks/graphics/ofPixels.h:50
 */
static int ofPixels_pasteInto(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    ofPixels *dst = *((ofPixels **)dub_checksdata(L, 2, "ofPixels"));
    int x = dub_checkint(L, 3);
    int y = dub_checkint(L, 4);
    lua_pushboolean(L, self->pasteInto(*dst, x, y));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "pasteInto: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "pasteInto: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPixels::swapRgb()
 * api/openFrameworks/graphics/ofPixels.h:52
 */
static int ofPixels_swapRgb(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    self->swapRgb();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "swapRgb: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "swapRgb: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPixels::clear()
 * api/openFrameworks/graphics/ofPixels.h:54
 */
static int ofPixels_clear(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    self->clear();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "clear: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "clear: Unknown exception");
  }
  return dub_error(L);
}

///** unsigned char* ofPixels::getPixels()
// * api/openFrameworks/graphics/ofPixels.h:56
// */
//static int ofPixels_getPixels(lua_State *L) {
//  try {
//    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
//    lua_pushstring(L, self->getPixels());
//    return 1;
//  } catch (std::exception &e) {
//    lua_pushfstring(L, "getPixels: %s", e.what());
//  } catch (...) {
//    lua_pushfstring(L, "getPixels: Unknown exception");
//  }
//  return dub_error(L);
//}

/** int ofPixels::getPixelIndex(int x, int y) const
 * api/openFrameworks/graphics/ofPixels.h:59
 */
static int ofPixels_getPixelIndex(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    int x = dub_checkint(L, 2);
    int y = dub_checkint(L, 3);
    lua_pushnumber(L, self->getPixelIndex(x, y));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getPixelIndex: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getPixelIndex: Unknown exception");
  }
  return dub_error(L);
}

/** ofColor ofPixels::getColor(int x, int y) const
 * api/openFrameworks/graphics/ofPixels.h:60
 */
static int ofPixels_getColor(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    int x = dub_checkint(L, 2);
    int y = dub_checkint(L, 3);
    dub_pushudata(L, new ofColor(self->getColor(x, y)), "ofColor", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getColor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getColor: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPixels::setColor(int x, int y, ofColor color)
 * api/openFrameworks/graphics/ofPixels.h:61
 */
static int ofPixels_setColor(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    int x = dub_checkint(L, 2);
    int y = dub_checkint(L, 3);
    ofColor *color = *((ofColor **)dub_checksdata(L, 4, "ofColor"));
    self->setColor(x, y, *color);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setColor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setColor: Unknown exception");
  }
  return dub_error(L);
}

/** const unsigned char& ofPixels::operator[](int pos) const
 * api/openFrameworks/graphics/ofPixels.h:63
 */
static int ofPixels__get_(lua_State *L) {

  ofPixels *self = *((ofPixels **)dub_checksdata_n(L, 1, "ofPixels", true));
  if (lua_type(L, 2) != LUA_TSTRING) {
    int pos = luaL_checkint(L, 2);
    lua_pushnumber(L, self->operator[](pos));
    return 1;
  }
  return 0;
}

/** bool ofPixels::isAllocated() const
 * api/openFrameworks/graphics/ofPixels.h:66
 */
static int ofPixels_isAllocated(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    lua_pushboolean(L, self->isAllocated());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isAllocated: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isAllocated: Unknown exception");
  }
  return dub_error(L);
}

/** int ofPixels::getWidth() const
 * api/openFrameworks/graphics/ofPixels.h:68
 */
static int ofPixels_getWidth(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    lua_pushnumber(L, self->getWidth());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getWidth: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getWidth: Unknown exception");
  }
  return dub_error(L);
}

/** int ofPixels::getHeight() const
 * api/openFrameworks/graphics/ofPixels.h:69
 */
static int ofPixels_getHeight(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    lua_pushnumber(L, self->getHeight());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getHeight: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getHeight: Unknown exception");
  }
  return dub_error(L);
}

/** int ofPixels::getBytesPerPixel() const
 * api/openFrameworks/graphics/ofPixels.h:71
 */
static int ofPixels_getBytesPerPixel(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    lua_pushnumber(L, self->getBytesPerPixel());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getBytesPerPixel: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getBytesPerPixel: Unknown exception");
  }
  return dub_error(L);
}

/** int ofPixels::getBitsPerPixel() const
 * api/openFrameworks/graphics/ofPixels.h:72
 */
static int ofPixels_getBitsPerPixel(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    lua_pushnumber(L, self->getBitsPerPixel());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getBitsPerPixel: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getBitsPerPixel: Unknown exception");
  }
  return dub_error(L);
}

/** int ofPixels::getBytesPerChannel() const
 * api/openFrameworks/graphics/ofPixels.h:73
 */
static int ofPixels_getBytesPerChannel(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    lua_pushnumber(L, self->getBytesPerChannel());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getBytesPerChannel: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getBytesPerChannel: Unknown exception");
  }
  return dub_error(L);
}

/** int ofPixels::getBitsPerChannel() const
 * api/openFrameworks/graphics/ofPixels.h:74
 */
static int ofPixels_getBitsPerChannel(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    lua_pushnumber(L, self->getBitsPerChannel());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getBitsPerChannel: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getBitsPerChannel: Unknown exception");
  }
  return dub_error(L);
}

/** int ofPixels::getNumChannels() const
 * api/openFrameworks/graphics/ofPixels.h:75
 */
static int ofPixels_getNumChannels(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    lua_pushnumber(L, self->getNumChannels());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getNumChannels: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getNumChannels: Unknown exception");
  }
  return dub_error(L);
}

/** ofPixels ofPixels::getChannel(int channel) const
 * api/openFrameworks/graphics/ofPixels.h:77
 */
static int ofPixels_getChannel(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    int channel = dub_checkint(L, 2);
    dub_pushudata(L, new ofPixels(self->getChannel(channel)), "ofPixels", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getChannel: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getChannel: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPixels::setChannel(int channel, const ofPixels channelPixels)
 * api/openFrameworks/graphics/ofPixels.h:78
 */
static int ofPixels_setChannel(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    int channel = dub_checkint(L, 2);
    ofPixels *channelPixels = *((ofPixels **)dub_checksdata(L, 3, "ofPixels"));
    self->setChannel(channel, *channelPixels);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setChannel: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setChannel: Unknown exception");
  }
  return dub_error(L);
}

/** ofImageType ofPixels::getImageType() const
 * api/openFrameworks/graphics/ofPixels.h:80
 */
static int ofPixels_getImageType(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    lua_pushnumber(L, self->getImageType());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getImageType: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getImageType: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPixels::setImageType(ofImageType imageType)
 * api/openFrameworks/graphics/ofPixels.h:81
 */
static int ofPixels_setImageType(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    ofImageType imageType = (ofImageType)dub_checkint(L, 2);
    self->setImageType(imageType);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setImageType: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setImageType: Unknown exception");
  }
  return dub_error(L);
}

/** void ofPixels::setNumChannels(int numChannels)
 * api/openFrameworks/graphics/ofPixels.h:82
 */
static int ofPixels_setNumChannels(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    int numChannels = dub_checkint(L, 2);
    self->setNumChannels(numChannels);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setNumChannels: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setNumChannels: Unknown exception");
  }
  return dub_error(L);
}

/** int ofPixels::size() const
 * api/openFrameworks/graphics/ofPixels.h:84
 */
static int ofPixels_size(lua_State *L) {
  try {
    ofPixels *self = *((ofPixels **)dub_checksdata(L, 1, "ofPixels"));
    lua_pushnumber(L, self->size());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "size: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "size: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int ofPixels___tostring(lua_State *L) {
  ofPixels *self = *((ofPixels **)dub_checksdata_n(L, 1, "ofPixels"));
  lua_pushfstring(L, "ofPixels: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg ofPixels_member_methods[] = {
  { "new"          , ofPixels_ofPixels    },
  { "__gc"         , ofPixels__ofPixels   },
  { "set"          , ofPixels_operator_sete },
  { "allocate"     , ofPixels_allocate    },
  { "set"          , ofPixels_set         },
//  { "setFromPixels", ofPixels_setFromPixels },
//  { "setFromExternalPixels", ofPixels_setFromExternalPixels },
//  { "setFromAlignedPixels", ofPixels_setFromAlignedPixels },
  { "swap"         , ofPixels_swap        },
  { "crop"         , ofPixels_crop        },
  { "cropTo"       , ofPixels_cropTo      },
  { "rotate90"     , ofPixels_rotate90    },
  { "rotate90To"   , ofPixels_rotate90To  },
  { "mirrorTo"     , ofPixels_mirrorTo    },
  { "mirror"       , ofPixels_mirror      },
  { "resize"       , ofPixels_resize      },
  { "resizeTo"     , ofPixels_resizeTo    },
  { "pasteInto"    , ofPixels_pasteInto   },
  { "swapRgb"      , ofPixels_swapRgb     },
  { "clear"        , ofPixels_clear       },
//  { "getPixels"    , ofPixels_getPixels   },
  { "getPixelIndex", ofPixels_getPixelIndex },
  { "getColor"     , ofPixels_getColor    },
  { "setColor"     , ofPixels_setColor    },
  { "__index"      , ofPixels__get_       },
  { "isAllocated"  , ofPixels_isAllocated },
  { "getWidth"     , ofPixels_getWidth    },
  { "getHeight"    , ofPixels_getHeight   },
  { "getBytesPerPixel", ofPixels_getBytesPerPixel },
  { "getBitsPerPixel", ofPixels_getBitsPerPixel },
  { "getBytesPerChannel", ofPixels_getBytesPerChannel },
  { "getBitsPerChannel", ofPixels_getBitsPerChannel },
  { "getNumChannels", ofPixels_getNumChannels },
  { "getChannel"   , ofPixels_getChannel  },
  { "setChannel"   , ofPixels_setChannel  },
  { "getImageType" , ofPixels_getImageType },
  { "setImageType" , ofPixels_setImageType },
  { "setNumChannels", ofPixels_setNumChannels },
  { "size"         , ofPixels_size        },
  { "__tostring"   , ofPixels___tostring  },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_ofPixels(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "ofPixels");
  // <mt>

  // register member methods
  luaL_register(L, NULL, ofPixels_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "ofPixels", "ofPixels");
  // <mt>
  lua_pop(L, 1);
  return 0;
}
