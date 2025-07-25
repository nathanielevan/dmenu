/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	// "Fantasque Sans Mono:pixelsize=13.5:antialias=true:autohint=true"
	// "Fira Mono:pixelsize=12:antialias=true:autohint=true"
	"Hack:pixelsize=12:antialias=true:autohint=true"
	// "Iosevka Custom:pixelsize=13.5:antialias=true:autohint=true"
	// "JetBrains Mono NL:pixelsize=12:antialias=true:autohint=true"
	// "Maple Mono:pixelsize=12:antialias=true:autohint=true"
	// "Noto Sans Mono:pixelsize=12:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#ebdbb2", "#282828" },
	[SchemeSel] = { "#282828", "#d79921" },
	[SchemeOut] = { "#282828", "#98971a" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 21;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
