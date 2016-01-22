// Configuration for quickly hacked together "post-process" scalers. The
// 320x200 resolution is correctly scan doubled to 640x400 by DosBox's
// usual "normal2x" scaler, but then these scaled that more upward and
// add effects like RGB subpixels and scan lines, looking more closely
// like the original Trinitron(R) tubes. It is reasonably possible in
// practice with LCDs that have resolution of 1200p or higher. IPS type
// of monitors are highly recommendable for the color space and contrast
// being closer to good high end CRTs which adds to the atmosphere.

// Scaler selection, which is compiled in hard coded fashion. Define one
// or none.
#define JSCALE	// 3x with scanlines, 320x200 and 640x400 to 1600x1200, or 640x480 to 1600x1440
#undef ASCALE	// 6/5x with subpixels and scanlines, 320x200 and 640x400 to 3840x2000

// Don't touch these (scaling values of different scalers)
#ifdef JSCALE
#define WIDTH_SCALE 3
#define HEIGHT_SCALE 3
#elif defined(ASCALE)
#define WIDTH_SCALE 6
#define HEIGHT_SCALE 5
#else
#define WIDTH_SCALE 1
#define HEIGHT_SCALE 1
#endif