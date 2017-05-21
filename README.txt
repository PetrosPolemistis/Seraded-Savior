sup seji, this is the online repository we're using for the development of the game.
It contains all the source code as well as compiled debug code that I'm currently using
for testing. The repository is divided into subfolders like so: A 'Launcher' folder,
an 'Assets' folder, and a 'Library' folder. The Launcher folder is for the platform-dependent
game launcher that essentially bootstraps the rest of the game from there. By
"the rest of the game" I primarily mean the code contained in the 'Library' folder. It's
designed this way so that if we want to export the game for multiple platforms, all we
have to do is change the Launcher component (re-code and compile it as necessary), and the
bulk of the game code (in the 'Library' folder) remains platform-independent (yay!).
Finally, the Assets folder is where everything else gets plugged into the game (theme songs, 
sound effect, sprites, your 3d models, etc). Your primary concern will be content of
this Assets folder (It isn't yet organized into subfolders for graphics and audio blah blah etc.
but you can do that as needed). Well, that's it for now. That's the basic outline of
the game plan (no pun intended).