int
helper(void)
{
#if defined(LINUX) && (WORD_SIZE == 64)
    return 42;
#elif defined(DARWIN)
    return 10;
#elif defined(WINDOWS) && defined(WIN_64)
    return 964;
#elif defined(WINDOWS) && defined(WIN_32)
    return 932;
#else
    return 0;
#endif
}
