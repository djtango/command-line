cp - copy
cp [option]... [-T] source dest #... --> multiple arguments supported!
cp [option]... [-T] source... dest
cp [option]... -t dir source...

options:
-a --archive
-b | --backup #make a backup of the file 
--copy-contents #copy contents of special files when recursive 
-d
-f --force #removes if existing file can't be opened remove it and try again
-i #popup print if overwriting
-H #command-line symbolic links
-l --link #link files instead of copying
-L --deference #always follow symbolic links
-R -r --recursive #recursive copy
-s --s #make symbolic links instead of copying
-u --update #only copy when source is newer than dest
-v --verbose #print actions
