#ifndef slic3r_MacDarkMode_hpp_
#define slic3r_MacDarkMode_hpp_

#include <wx/event.h>

namespace Slic3r {
namespace GUI {

#if __APPLE__
extern bool mac_dark_mode();
extern double mac_max_scaling_factor();
extern void set_miniaturizable(void * window);
void WKWebView_evaluateJavaScript(void * web, wxString const & script, void (*callback)(wxString const &));
void WKWebView_setTransparentBackground(void * web);
// Load a file:// URL with read-access grant so relative ./assets/* siblings can load.
// WKWebView's default loadRequest: isolates each file:// load, so <script src="./assets/x.js">
// returns 0 bytes silently and the page stays blank. Returns true if load was issued.
bool WKWebView_loadFileURL(void * web, wxString const & url);
void set_tag_when_enter_full_screen(bool isfullscreen);
void set_title_colour_after_set_title(void * window);
void initGestures(void * view,  wxEvtHandler * handler);
void openFolderForFile(wxString const & file);
void StaticGroup_layoutBadge(void * group, void * badge);
#endif


} // namespace GUI
} // namespace Slic3r

#endif // MacDarkMode_h
