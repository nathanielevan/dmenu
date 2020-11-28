/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka Nerd Font Mono:style=Bold:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#d8dee9", "#2e3440" },
	[SchemeSel] = { "#2e3440", "#d8dee9" },
	[SchemeOut] = { "#2e3440", "#ebcb8b" },
    [SchemeNormHighlight] = { "#81a1c1", "#2e3440" },
    [SchemeSelHighlight] = { "#5e81ac", "#d8dee9" },
    [SchemeOutHighlight] = { "#5e81ac", "#ebcb8b" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 29;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
