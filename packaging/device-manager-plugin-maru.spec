Name:       device-manager-plugin-maru
Summary:    device-manager-plugin-maru
Version: 0.0.9
Release:    1
Group:      TO_BE/FILLED_IN
License:    TO_BE/FILLED_IN
Source0:    %{name}-%{version}.tar.gz
ExclusiveArch: %{ix86}
Requires(post): /sbin/ldconfig
Requires(postun): /sbin/ldconfig
BuildRequires:  cmake
BuildRequires:  pkgconfig(devman_plugin)

%description
device-manager-plugin-maru.

%prep
%setup -q

%build
export LDFLAGS+="-Wl,--rpath=%{_prefix}/lib -Wl,--as-needed"
cmake . -DCMAKE_INSTALL_PREFIX=%{_prefix}

make 

%install
rm -rf %{buildroot}
%make_install

%post
/sbin/ldconfig

%postun
/sbin/ldconfig

%files
%defattr(-,root,root,-)
%{_libdir}/libslp_devman_plugin.so

