int
helper(void)
{
#if defined(LINUX)
    return 42;
#elif defined(DARWIN)
    return 10;
#else
    return 0;
#endif
}
