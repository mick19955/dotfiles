static const char norm_fg[] = "#80e0e0";
static const char norm_bg[] = "#1c1519";
static const char norm_border[] = "#599c9c";

static const char sel_fg[] = "#80e0e0";
static const char sel_bg[] = "#5C605E";
static const char sel_border[] = "#80e0e0";

static const char urg_fg[] = "#80e0e0";
static const char urg_bg[] = "#504E4F";
static const char urg_border[] = "#504E4F";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
