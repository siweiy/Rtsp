target_file = 'rtsp_server'

inc_path = [
	
]

src = [Glob('*.c'), Glob('*.cpp')]

lib_path = [

]

libs = [

]

defines = []

ccflags = ['-O3','-Wall', '-std=c++11']

env=Environment(
	CXX = 'g++',
    CC = 'gcc'
)

for flag in ccflags:
	env.AppendUnique(CPPFLAGS=[flag])

for path in inc_path:
	env.AppendUnique(CPPPATH=[path])

for deb in defines:
	env.AppendUnique(CPPDEFINES=[deb])

for path in lib_path:
	env.AppendUnique(LIBPATH=[path])

for lib in libs:
	env.AppendUnique(LIBS=[lib])

env.Append(CCCOMSTR="CC $SOURCES")
env.Append(LINKCOMSTR="LINK $TARGET")

env.Program(target = target_file, source=src)
