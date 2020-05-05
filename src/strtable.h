// Purpose: String resource IDs (see strtable.rc for STRINGTABLE)

#ifdef _WIN32

    #define IDS_USAGE_MSG_HELP      1024  // "display this help message"

#else

constexpr auto IDS_USAGE_MSG_HELP = "display this help message";

#endif
