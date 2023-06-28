/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-06-15T19:52:41Z
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * SDTokenTransferRequest.h
 *
 * 
 */

#ifndef GG_STARDUST_CORESDK_MODEL_SDTokenTransferRequest_H_
#define GG_STARDUST_CORESDK_MODEL_SDTokenTransferRequest_H_


#include "StardustCoreSDK/ModelBase.h"

#include "StardustCoreSDK/model/SDTokenBurnRequest_tokenObjects_inner.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {

class SDTokenBurnRequest_tokenObjects_inner;

/// <summary>
/// 
/// </summary>
class  SDTokenTransferRequest
    : public ModelBase
{
public:
    SDTokenTransferRequest();
    virtual ~SDTokenTransferRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SDTokenTransferRequest members

    /// <summary>
    /// The Player&#39;s id, can be found with Player/getId(s). (ex. CzySggxVQz51jciGRFDY7d5BER2fav6TNEnPGjusPJPd)
    /// </summary>
    utility::string_t getFromPlayerId() const;
    bool fromPlayerIdIsSet() const;
    void unsetFromPlayerId();

    void setFromPlayerId(const utility::string_t& value);

    /// <summary>
    /// The Player&#39;s id, can be found with Player/getId(s). (ex. 53ywNSVp46QpiA6S86DLLfeKVfjcSAFxHR2L9j8tnte2)
    /// </summary>
    utility::string_t getToPlayerId() const;
    bool toPlayerIdIsSet() const;
    void unsetToPlayerId();

    void setToPlayerId(const utility::string_t& value);

    /// <summary>
    /// An array of objects of which tokens to transfer (ex. [{tokenId: 5, amount: \&quot;3\&quot;}])
    /// </summary>
    std::vector<std::shared_ptr<SDTokenBurnRequest_tokenObjects_inner>>& getTokenObjects();
    bool tokenObjectsIsSet() const;
    void unsetTokenObjects();

    void setTokenObjects(const std::vector<std::shared_ptr<SDTokenBurnRequest_tokenObjects_inner>>& value);


protected:
    utility::string_t m_FromPlayerId;
    bool m_FromPlayerIdIsSet;
    utility::string_t m_ToPlayerId;
    bool m_ToPlayerIdIsSet;
    std::vector<std::shared_ptr<SDTokenBurnRequest_tokenObjects_inner>> m_TokenObjects;
    bool m_TokenObjectsIsSet;
};


}
}
}
}

#endif /* GG_STARDUST_CORESDK_MODEL_SDTokenTransferRequest_H_ */
