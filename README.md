# hello_ida_build
Experimenting with building plugins for IDA Pro

# To Build for Window

Use Visual Studio or msbuild. Make sure that the following environment variables are set:
* IDASDK: Path to the IDA SDK directory. Expects that $(IDASDK)\include and $(IDASDK)\lib exist.
* BOOSTDIR: Path to a Boost download. Expects that $(BOOSTDIR)\boost and $(BOOSTIDR)\libs exist.

For VS: select Build\Batch Build and make sure that Release and Release64 are selected. Copy the .plw and .p64 to the the $(IDA)\plugins directory.

# To Build for Mac
TODO

# To Build for Linux
TODO
