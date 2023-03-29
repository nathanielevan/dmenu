/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	// "DMCAsansserif Nerd Font:pixelsize=15:antialias=true:autohint=true"
	// "FantasqueSansMono Nerd Font:pixelsize=15:antialias=true:autohint=true"
	// "FiraCode Nerd Font:pixelsize=14:antialias=true:autohint=true"
	// "Hack Nerd Font:pixelsize=13.5:antialias=true:autohint=true"
	// "InconsolataLGC Nerd Font:pixelsize=14:antialias=true:autohint=true"
	// "Input Nerd Font:pixelsize=14:antialias=true:autohint=true"
	"Iosevka Nerd Font:pixelsize=15:antialias=true:autohint=true"
	// "JetBrainsMono Nerd Font:pixelsize=14:antialias=true:autohint=true"
	// "JuliaMono Nerd Font:pixelsize=14:antialias=true:autohint=true"
	// "MesloLGM Nerd Font:pixelsize=14:antialias=true:autohint=true"
	// "mononoki Nerd Font:pixelsize=15:antialias=true:autohint=true"
	// "NotoSansMono Nerd Font:pixelsize=14:antialias=true:autohint=true"
	// "VictorMono Nerd Font:pixelsize=15:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#d4be98", "#282828" },
	[SchemeSel] = { "#282828", "#d8a657" },
	[SchemeOut] = { "#282828", "#a9b665" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 26;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
