/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class charProps
 *
 * This file has been generated by dub 2.1.~.
 */
#include "dub/dub.h"
#include "api/openFrameworks/graphics/ofTrueTypeFont.h"


/** Set attributes (key, value)
 * 
 */
static int charProps__set_(lua_State *L) {

  charProps *self = *((charProps **)dub_checksdata_n(L, 1, "charProps"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub_hash(key, 47);
  switch(key_h) {
    case 43: {
      if (DUB_ASSERT_KEY(key, "character")) break;
      self->character = luaL_checkint(L, 3);
      return 0;
    }
    case 24: {
      if (DUB_ASSERT_KEY(key, "height")) break;
      self->height = luaL_checkint(L, 3);
      return 0;
    }
    case 12: {
      if (DUB_ASSERT_KEY(key, "width")) break;
      self->width = luaL_checkint(L, 3);
      return 0;
    }
    case 26: {
      if (DUB_ASSERT_KEY(key, "setWidth")) break;
      self->setWidth = luaL_checkint(L, 3);
      return 0;
    }
    case 44: {
      if (DUB_ASSERT_KEY(key, "topExtent")) break;
      self->topExtent = luaL_checkint(L, 3);
      return 0;
    }
    case 42: {
      if (DUB_ASSERT_KEY(key, "leftExtent")) break;
      self->leftExtent = luaL_checkint(L, 3);
      return 0;
    }
    case 36: {
      if (DUB_ASSERT_KEY(key, "tW")) break;
      self->tW = luaL_checknumber(L, 3);
      return 0;
    }
    case 21: {
      if (DUB_ASSERT_KEY(key, "tH")) break;
      self->tH = luaL_checknumber(L, 3);
      return 0;
    }
    case 40: {
      if (DUB_ASSERT_KEY(key, "x1")) break;
      self->x1 = luaL_checknumber(L, 3);
      return 0;
    }
    case 41: {
      if (DUB_ASSERT_KEY(key, "x2")) break;
      self->x2 = luaL_checknumber(L, 3);
      return 0;
    }
    case 27: {
      if (DUB_ASSERT_KEY(key, "y1")) break;
      self->y1 = luaL_checknumber(L, 3);
      return 0;
    }
    case 28: {
      if (DUB_ASSERT_KEY(key, "y2")) break;
      self->y2 = luaL_checknumber(L, 3);
      return 0;
    }
    case 45: {
      if (DUB_ASSERT_KEY(key, "t1")) break;
      self->t1 = luaL_checknumber(L, 3);
      return 0;
    }
    case 46: {
      if (DUB_ASSERT_KEY(key, "t2")) break;
      self->t2 = luaL_checknumber(L, 3);
      return 0;
    }
    case 19: {
      if (DUB_ASSERT_KEY(key, "v1")) break;
      self->v1 = luaL_checknumber(L, 3);
      return 0;
    }
    case 20: {
      if (DUB_ASSERT_KEY(key, "v2")) break;
      self->v2 = luaL_checknumber(L, 3);
      return 0;
    }
  }
  if (lua_istable(L, 1)) {
    lua_rawset(L, 1);
  } else {
    luaL_error(L, KEY_EXCEPTION_MSG, key);
  }
  return 0;
}

/** Get attributes (key)
 * 
 */
static int charProps__get_(lua_State *L) {

  charProps *self = *((charProps **)dub_checksdata_n(L, 1, "charProps", true));
  const char *key = luaL_checkstring(L, 2);
  // <self> "key" <mt>
  // rawget(mt, key)
  lua_pushvalue(L, 2);
  // <self> "key" <mt> "key"
  lua_rawget(L, -2);
  if (!lua_isnil(L, -1)) {
    // Found method.
    return 1;
  } else {
    // Not in mt = attribute access.
    lua_pop(L, 2);
  }
  int key_h = dub_hash(key, 47);
  switch(key_h) {
    case 43: {
      if (DUB_ASSERT_KEY(key, "character")) break;
      lua_pushnumber(L, self->character);
      return 1;
    }
    case 24: {
      if (DUB_ASSERT_KEY(key, "height")) break;
      lua_pushnumber(L, self->height);
      return 1;
    }
    case 12: {
      if (DUB_ASSERT_KEY(key, "width")) break;
      lua_pushnumber(L, self->width);
      return 1;
    }
    case 26: {
      if (DUB_ASSERT_KEY(key, "setWidth")) break;
      lua_pushnumber(L, self->setWidth);
      return 1;
    }
    case 44: {
      if (DUB_ASSERT_KEY(key, "topExtent")) break;
      lua_pushnumber(L, self->topExtent);
      return 1;
    }
    case 42: {
      if (DUB_ASSERT_KEY(key, "leftExtent")) break;
      lua_pushnumber(L, self->leftExtent);
      return 1;
    }
    case 36: {
      if (DUB_ASSERT_KEY(key, "tW")) break;
      lua_pushnumber(L, self->tW);
      return 1;
    }
    case 21: {
      if (DUB_ASSERT_KEY(key, "tH")) break;
      lua_pushnumber(L, self->tH);
      return 1;
    }
    case 40: {
      if (DUB_ASSERT_KEY(key, "x1")) break;
      lua_pushnumber(L, self->x1);
      return 1;
    }
    case 41: {
      if (DUB_ASSERT_KEY(key, "x2")) break;
      lua_pushnumber(L, self->x2);
      return 1;
    }
    case 27: {
      if (DUB_ASSERT_KEY(key, "y1")) break;
      lua_pushnumber(L, self->y1);
      return 1;
    }
    case 28: {
      if (DUB_ASSERT_KEY(key, "y2")) break;
      lua_pushnumber(L, self->y2);
      return 1;
    }
    case 45: {
      if (DUB_ASSERT_KEY(key, "t1")) break;
      lua_pushnumber(L, self->t1);
      return 1;
    }
    case 46: {
      if (DUB_ASSERT_KEY(key, "t2")) break;
      lua_pushnumber(L, self->t2);
      return 1;
    }
    case 19: {
      if (DUB_ASSERT_KEY(key, "v1")) break;
      lua_pushnumber(L, self->v1);
      return 1;
    }
    case 20: {
      if (DUB_ASSERT_KEY(key, "v2")) break;
      lua_pushnumber(L, self->v2);
      return 1;
    }
  }
  return 0;
}

/** charProps()
 * 
 */
static int charProps_charProps(lua_State *L) {
  try {
    charProps *retval__ = new charProps();
    dub_pushudata(L, retval__, "charProps", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub_error(L);
}



// --=============================================== __tostring
static int charProps___tostring(lua_State *L) {
  charProps *self = *((charProps **)dub_checksdata_n(L, 1, "charProps"));
  lua_pushfstring(L, "charProps: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg charProps_member_methods[] = {
  { "__newindex"   , charProps__set_      },
  { "__index"      , charProps__get_      },
  { "new"          , charProps_charProps  },
  { "__tostring"   , charProps___tostring },
  { "deleted"      , dub_isDeleted        },
  { NULL, NULL},
};


extern "C" int luaopen_charProps(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "charProps");
  // <mt>

  // register member methods
  luaL_register(L, NULL, charProps_member_methods);
  // save meta-table in _G
  dub_register(L, "_G", "charProps", "charProps");
  // <mt>
  lua_pop(L, 1);
  return 0;
}