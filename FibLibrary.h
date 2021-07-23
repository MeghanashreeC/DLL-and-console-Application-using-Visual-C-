# DLL-and-console-Application-using-Visual-C-

#ifdef FIBLIBRARY_EXPORTS
#define FIBLIBRARY_API __declspec(dllexport)
#else
#define FIBLIBRARY_API __declspec(dllimport)

#endif // MATHLIBRARY_EXPORTS


extern "C" FIBLIBRARY_API void fibonacci_init(
	const unsigned long long a, const unsigned long long b);


extern "C" FIBLIBRARY_API bool fibonacci_next();

extern "C" FIBLIBRARY_API unsigned long long  fibonacci_current();

extern "C" FIBLIBRARY_API unsigned fibonacci_index();
