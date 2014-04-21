#include <unordered_map>

#include <p2p/Root/Key.hpp>
#include <p2p/Root/NodeDatabase.hpp>
#include <p2p/Root/NodeId.hpp>
#include <p2p/Root/PublicIdentity.hpp>

namespace p2p {

	namespace Root {
		
		NodeDatabase::NodeDatabase() { }
		
		bool NodeDatabase::isKnownId(const NodeId& id) const {
			return map_.find(id) != map_.end();
		}
		
		void NodeDatabase::addNode(const NodeId& id, NodeInfo pNodeInfo) {
			map_.emplace(id, std::move(pNodeInfo));
		}
		
		NodeInfo& NodeDatabase::nodeInfo(const NodeId& id) {
			return map_.at(id);
		}
		
		const NodeInfo& NodeDatabase::nodeInfo(const NodeId& id) const {
			return map_.at(id);
		}
		
	}
	
}
