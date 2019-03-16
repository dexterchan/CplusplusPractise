# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.ComplexNumber.Debug:
/Users/dexter/sandbox/CplusplusWorkspace/DEMO_CMAKE/macbuild/ComplexNumber/Debug/ComplexNumber:
	/bin/rm -f /Users/dexter/sandbox/CplusplusWorkspace/DEMO_CMAKE/macbuild/ComplexNumber/Debug/ComplexNumber


PostBuild.ComplexNumber.Release:
/Users/dexter/sandbox/CplusplusWorkspace/DEMO_CMAKE/macbuild/ComplexNumber/Release/ComplexNumber:
	/bin/rm -f /Users/dexter/sandbox/CplusplusWorkspace/DEMO_CMAKE/macbuild/ComplexNumber/Release/ComplexNumber


PostBuild.ComplexNumber.MinSizeRel:
/Users/dexter/sandbox/CplusplusWorkspace/DEMO_CMAKE/macbuild/ComplexNumber/MinSizeRel/ComplexNumber:
	/bin/rm -f /Users/dexter/sandbox/CplusplusWorkspace/DEMO_CMAKE/macbuild/ComplexNumber/MinSizeRel/ComplexNumber


PostBuild.ComplexNumber.RelWithDebInfo:
/Users/dexter/sandbox/CplusplusWorkspace/DEMO_CMAKE/macbuild/ComplexNumber/RelWithDebInfo/ComplexNumber:
	/bin/rm -f /Users/dexter/sandbox/CplusplusWorkspace/DEMO_CMAKE/macbuild/ComplexNumber/RelWithDebInfo/ComplexNumber




# For each target create a dummy ruleso the target does not have to exist
