
### === CONFIGURATION === ###

# base options apply to both debug and release builds, but can be overriden

base_options = {
	"include_dirs": ["include"],
	"source_dir": "src",
	"build_dir": "out",
	"compile_flags": "-Wall -ansi -pedantic",
	"output_executable": "xkcdrl"
}


debug_options =  {
	"compile_flags": "-Wall -ansi -pedantic -DDEBUG"
}


release_options = {
	"compile_flags": "-Wall -ansi -pedantic -O2 -UDEBUG",
	"output_executable": "xkcdrl_release"
}

### === END CONFIGURATION === ###



### === DO NOT EDIT BELOW === ###

cmd_options = Variables()
cmd_options.Add(BoolVariable("release", "Set to true or 1 to build for release", 0))

env = Environment(variables = cmd_options)

debug_on = not int(env["release"])

options = base_options

if debug_on:
	options.update(debug_options)
else:
	options.update(release_options)
	

VariantDir(options.get("build_dir", "out"), options.get("source_dir", "src"), duplicate=0)
#VariantDir("out", "src")

env.Append(
	CPPPATH = options.get("include_dirs", []),
	CCFLAGS = options.get("compile_flags", "-Wall")
)




env.Program(options.get("output_executable", "out"), Glob(options.get("build_dir", "out") + "/*.c"))


