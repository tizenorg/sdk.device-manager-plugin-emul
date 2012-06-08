Name:       device-manager-plugin-emul
Summary:    device-manager-plugin-emul
Version: 0.0.1
Release:    1
Group:      libs
License:    Flora Software License
Source0:    %{name}-%{version}.tar.gz
Source1:    device-manager-plugin-emul.install.in
ExclusiveArch: %{ix86}
BuildRequires: pkgconfig(glib-2.0)
BuildRequires: pkgconfig(devman)
BuildRequires: pkgconfig(devman_plugin)
BuildRequires: cmake
Requires(post):   /sbin/ldconfig
%description
device-manager-plugin-emul.

%prep
%setup -q

%package devel
Summary:    Download agent
Group:      Development/Libraries
Requires:   %{name} = %{version}-%{release}

%description devel
device-manager-plugin-emul (devel)


%build
export LDFLAGS+="-Wl,--rpath=%{_prefix}/lib -Wl,--as-needed"
cmake . -DCMAKE_INSTALL_PREFIX=%{_prefix}

make 

%install


%make_install



%post

%postun

%files
%defattr(-,root,root,-)
%{_libdir}/*

%files devel
%defattr(-,root,root,-)
%{_libdir}/*
