/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-07-25T00:59:12Z
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * SDOrderCreateRequest.h
 *
 * 
 */

#ifndef GG_STARDUST_CORESDK_MODEL_SDOrderCreateRequest_H_
#define GG_STARDUST_CORESDK_MODEL_SDOrderCreateRequest_H_


#include "StardustCoreSDK/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "StardustCoreSDK/model/SDOrderCreateTokens.h"
#include <vector>

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {

class SDOrderCreateTokens;

/// <summary>
/// 
/// </summary>
class  SDOrderCreateRequest
    : public ModelBase
{
public:
    SDOrderCreateRequest();
    virtual ~SDOrderCreateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SDOrderCreateRequest members

    /// <summary>
    /// PlayerId creating the order
    /// </summary>
    utility::string_t getOfferedBy() const;
    bool offeredByIsSet() const;
    void unsetOfferedBy();

    void setOfferedBy(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<SDOrderCreateTokens>>& getTokensOffered();
    bool tokensOfferedIsSet() const;
    void unsetTokensOffered();

    void setTokensOffered(const std::vector<std::shared_ptr<SDOrderCreateTokens>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<SDOrderCreateTokens>>& getTokensRequested();
    bool tokensRequestedIsSet() const;
    void unsetTokensRequested();

    void setTokensRequested(const std::vector<std::shared_ptr<SDOrderCreateTokens>>& value);


protected:
    utility::string_t m_OfferedBy;
    bool m_OfferedByIsSet;
    std::vector<std::shared_ptr<SDOrderCreateTokens>> m_TokensOffered;
    bool m_TokensOfferedIsSet;
    std::vector<std::shared_ptr<SDOrderCreateTokens>> m_TokensRequested;
    bool m_TokensRequestedIsSet;
};


}
}
}
}

#endif /* GG_STARDUST_CORESDK_MODEL_SDOrderCreateRequest_H_ */
