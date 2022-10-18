#ifdef __arm__
static int
png_have_neon(png_structp png_ptr) {
    return 1;
}
#else
static int
png_have_neon(png_structp png_ptr) {
    return 0;
}
#endif