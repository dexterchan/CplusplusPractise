# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.HelloWorldTutorial.Debug:
/Users/dexter/sandbox/CplusplusWorkspace/DEMO_CMAKE/macbuild/HelloWorld/Debug/HelloWorldTutorial:
	/bin/rm -f /Users/dexter/sandbox/CplusplusWorkspace/DEMO_CMAKE/macbuild/HelloWorld/Debug/HelloWorldTutorial


PostBuild.HelloWorldTutorial.Release:
/Users/dexter/sandbox/CplusplusWorkspace/DEMO_CMAKE/macbuild/HelloWorld/Release/HelloWorldTutorial:
	/bin/rm -f /Users/dexter/sandbox/CplusplusWorkspace/DEMO_CMAKE/macbuild/HelloWorld/Release/HelloWorldTutorial


PostBuild.HelloWorldTutorial.MinSizeRel:
/Users/dexter/sandbox/CplusplusWorkspace/DEMO_CMAKE/macbuild/HelloWorld/MinSizeRel/HelloWorldTutorial:
	/bin/rm -f /Users/dexter/sandbox/CplusplusWorkspace/DEMO_CMAKE/macbuild/HelloWorld/MinSizeRel/HelloWorldTutorial


PostBuild.HelloWorldTutorial.RelWithDebInfo:
/Users/dexter/sandbox/CplusplusWorkspace/DEMO_CMAKE/macbuild/HelloWorld/RelWithDebInfo/HelloWorldTutorial:
	/bin/rm -f /Users/dexter/sandbox/CplusplusWorkspace/DEMO_CMAKE/macbuild/HelloWorld/RelWithDebInfo/HelloWorldTutorial




# For each target create a dummy ruleso the target does not have to exist
