//
//  OpenVPNAdapter.h
//  OpenVPNAdapter
//
//  Created by Sergey Abramchuk on 09.03.17.
//
//

@import Foundation;

//! Project version number for OpenVPNAdapter.
FOUNDATION_EXPORT double OpenVPNAdapterVersionNumber;

//! Project version string for OpenVPNAdapter.
FOUNDATION_EXPORT const unsigned char OpenVPNAdapterVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <OpenVPNAdapter/PublicHeader.h>

#import <AtomOVPNTunnel/OpenVPNError.h>
#import <AtomOVPNTunnel/OpenVPNAdapterEvent.h>
#import <AtomOVPNTunnel/OpenVPNTransportProtocol.h>
#import <AtomOVPNTunnel/OpenVPNIPv6Preference.h>
#import <AtomOVPNTunnel/OpenVPNCompressionMode.h>
#import <AtomOVPNTunnel/OpenVPNMinTLSVersion.h>
#import <AtomOVPNTunnel/OpenVPNTLSCertProfile.h>
#import <AtomOVPNTunnel/OpenVPNConfiguration.h>
#import <AtomOVPNTunnel/OpenVPNCredentials.h>
#import <AtomOVPNTunnel/OpenVPNServerEntry.h>
#import <AtomOVPNTunnel/OpenVPNConfigurationEvaluation.h>
#import <AtomOVPNTunnel/OpenVPNConnectionInfo.h>
#import <AtomOVPNTunnel/OpenVPNSessionToken.h>
#import <AtomOVPNTunnel/OpenVPNTransportStats.h>
#import <AtomOVPNTunnel/OpenVPNInterfaceStats.h>
#import <AtomOVPNTunnel/OpenVPNAdapterImpl.h>
#import <AtomOVPNTunnel/OpenVPNAdapterPacketFlow.h>
#import <AtomOVPNTunnel/OpenVPNKeyType.h>
#import <AtomOVPNTunnel/OpenVPNCertificate.h>
#import <AtomOVPNTunnel/OpenVPNPrivateKey.h>
#import <AtomOVPNTunnel/OpenVPNReachabilityStatus.h>
#import <AtomOVPNTunnel/OpenVPNReachability.h>
