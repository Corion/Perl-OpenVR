#perl -w
use strict;
use Test::More tests => 1;
use OpenVR;

my $present = OpenVR::VR_IsHmdPresent();

if( $present ) {
    diag "Maybe you have an HMD";
} else {
    diag "No HMD present";
};

ok 1, "We didn't crash";
done_testing;
