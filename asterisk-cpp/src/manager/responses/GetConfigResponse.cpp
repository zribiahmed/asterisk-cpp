/* 
 * File:   GetConfigResponse.cpp
 * Author: augcampos
 * 
 * Created on July 11, 2013, 3:07 AM
 */

#include "asteriskcpp/manager/responses/GetConfigResponse.h"

namespace asteriskcpp {

    GetConfigResponse::GetConfigResponse(const std::string& responseStr) :
    ManagerResponse(responseStr) {
    }

    GetConfigResponse::~GetConfigResponse() {
    }

    const std::map<std::string, std::string>& GetConfigResponse::getCategories() const {
        std::map<std::string, std::string> rt = new std::map<std::string, std::string>();

        return rt;
    }

    const std::map<int, std::string>& getLines(int categoryNumber) const {
        std::map<int, std::string> rt = new std::map<int, std::string>();

        return rt;
    }
}
