#ifndef OPENP2P_FOLDERSYNC_MEMDATABASE_HPP
#define OPENP2P_FOLDERSYNC_MEMDATABASE_HPP

#include <map>

#include <OpenP2P/FolderSync/Block.hpp>
#include <OpenP2P/FolderSync/BlockId.hpp>
#include <OpenP2P/FolderSync/Database.hpp>

namespace OpenP2P {
	
	namespace FolderSync {
		
		class MemDatabase: public Database {
			public:
				MemDatabase();
				~MemDatabase();
				
				bool hasBlock(const BlockId& id) const;
				
				Block loadBlock(const BlockId& id) const;
				
				void storeBlock(const Block& data);
				
			private:
				std::map<BlockId, Block> data_;
			
		};
		
	}
	
}

#endif