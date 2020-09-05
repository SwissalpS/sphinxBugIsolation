
namespace SwissalpS { namespace FooTest { namespace IRC {



// this works when run with python 3.6.9 -> https://i.imgur.com/hYn7flQ.png
// but with Python 3.8.5 'irc.abort' is invisible


/// called from lua by **core.abort**(iNumber) as **irc.abort**(iNumber)
static int abortLua() {
	return 0;
} // abortLua


// **s...** works

/// called from lua by **core.bort**(iNumber) as **sirc.abort**(iNumber)
static int bortLua() {
	return 0;
} // bortLua


// **as irc.abort** also vanishes

/// called from lua by **core.ort**(iNumber) **as irc.abort**(iNumber)
static int ortLua() {
	return 0;
} // ortLua



}}} // namespace SwissalpS::FooTest::IRC
