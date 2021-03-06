#ifndef P2P_CRYPT_ECDSA_CURVE_HPP
#define P2P_CRYPT_ECDSA_CURVE_HPP

#include <cryptopp/oids.h>

namespace p2p {

	namespace Crypt {
	
		namespace ECDSA {
		
			enum Curve {
				brainpoolP256r1,
				brainpoolP512r1
			};
			
		}
		
	}
	
}

#endif
