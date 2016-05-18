struct GAsyncQueue {};
struct GBookmarkFile {};
struct GBytes {};
struct GChecksum {};
struct GData {};
struct GDateTime {};
struct GDir {};
struct GHashTable {};
struct GHmac {};
struct GKeyFile {};
struct GLib {};
struct GMainContext {};
struct GMainLoop {};
struct GMappedFile {};
struct GMarkupParseContext {};
struct GMatchInfo {};
struct GMutexLocker {};
struct GOptionContext {};
struct GOptionGroup {};
struct GPatternSpec {};
struct GRand {};
struct GRegex {};
struct GSequence {};
struct GSequenceIter {};
struct GSourcePrivate {};
struct GStatBuf {};
struct GStringChunk {};
struct GString_autoptr {};
struct GTestCase {};
struct GTestSuite {};
struct GTimeZone {};
struct GTimer {};
struct GTree {};
struct GType {};
struct GVariant {};
struct _GVariantType {};
struct Mutex {};

#define GLIB_DISABLE_DEPRECATION_WARNINGS
#include <glib.h>
#include <glib-object.h>
#include <glib/gvarianttype.h>
#include <glib/gthread.h>

typedef GCompareDataFunc CompareDataFunc;
typedef GCompareFunc CompareFunc;
typedef GHookCheckMarshaller HookCheckMarshaller;
typedef GHookMarshaller HookMarshaller;
typedef GIOFlags IOFlags;
typedef GTraverseFlags TraverseFlags;
typedef GOptionParseFunc OptionParseFunc;
typedef GCopyFunc CopyFunc;
typedef GFunc Func;
typedef GHFunc HFunc;
typedef GNodeForeachFunc NodeForeachFunc;
typedef GNodeTraverseFunc NodeTraverseFunc;
typedef GOptionErrorFunc OptionErrorFunc;
typedef GPollFunc PollFunc;
typedef GSequenceIterCompareFunc SequenceIterCompareFunc;
typedef GSourceFunc SourceFunc;
typedef GThreadFunc ThreadFunc;
typedef GTranslateFunc TranslateFunc;
typedef GTraverseFunc TraverseFunc;
typedef GDestroyNotify DestroyNotify;
typedef GRegexEvalCallback RegexEvalCallback;
typedef GRegexMatchFlags RegexMatchFlags;
typedef GIOCondition IOCondition;
typedef GKeyFileFlags KeyFileFlags;
typedef GHRFunc HRFunc;
typedef GHashFunc HashFunc;
typedef GEqualFunc EqualFunc;
typedef GHookFindFunc HookFindFunc;
typedef GHookCompareFunc HookCompareFunc;
typedef GRegexCompileFlags RegexCompileFlags;
typedef GMarkupParseFlags MarkupParseFlags;
