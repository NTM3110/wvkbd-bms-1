#ifndef config_h_INCLUDED
#define config_h_INCLUDED

#define DEFAULT_FONT "Sans Light 21"
#define DEFAULT_ROUNDING 5
#define SHIFT_SPACE_IS_TAB
static const int transparency = 255;

struct clr_scheme schemes[] = {
{
  /* colors */
  .bg = {.bgra = {255, 255, 255, transparency}},
  .fg = {.bgra = {255, 255, 255, 255}},
  .high = {.bgra = {200, 200, 200, 255}},
  .swipe = {.bgra = {100, 255, 100, 64}},
  .text = {.bgra = {120, 120, 120, 255}},
  .font = DEFAULT_FONT,
  .rounding = DEFAULT_ROUNDING,
},
{
  /* colors */
  .bg = {.bgra = {255, 255, 255, transparency}},
  .fg = {.bgra = {255, 255, 255, 255}},
  .high = {.bgra = {200, 200, 200, 255}},
  .swipe = {.bgra = {100, 255, 100, 64}},
  .text = {.bgra = {120, 120, 120, 255}},
  .font = DEFAULT_FONT,
  .rounding = DEFAULT_ROUNDING,
}
};

/* layers is an ordered list of layouts, used to cycle through */
static enum layout_id layers[] = {
  Full, // First layout is the default layout on startup
  Special,
  NumLayouts // signals the last item, may not be omitted
};

/* layers is an ordered list of layouts, used to cycle through */
static enum layout_id landscape_layers[] = {
  Landscape, // First layout is the default layout on startup
  LandscapeSpecial,
  NumLayouts // signals the last item, may not be omitted
};

#endif // config_h_INCLUDED
