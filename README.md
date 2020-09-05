# sphinxBugIsolation

This repo was created to show how to reproduce a bug with `**something**` syntax.

Read comments in src/foo.cpp to get a clearer picture.

## Dependencies

Python 3.6.9 renders correctly -> https://i.imgur.com/hYn7flQ.png

Python 3.8.5 renders `'**irc.abort**'` as `'<strong></strong>'`

Needs Doxygen, Sphinx and a couple of Sphinx plugins
``` sh
$ python -m pip install --user docutils
$ pip install breathe --user
$ pip install exhale --user
$ pip install groundwork-sphinx-theme --user
```

## Reproduce
``` sh
$ git clone https://github.com/SwissalpS/sphinxBugIsolation.git
$ cd sphinxBugIsolation
$ doc/build.sh
```
Open the created html in browser. doc/build/html/index.html
