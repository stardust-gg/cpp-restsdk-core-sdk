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
 * SDTokenBurnRequest.h
 *
 * 
 */

#ifndef GG_STARDUST_CORESDK_MODEL_SDTokenBurnRequest_H_
#define GG_STARDUST_CORESDK_MODEL_SDTokenBurnRequest_H_


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
class  SDTokenBurnRequest
    : public ModelBase
{
public:
    SDTokenBurnRequest();
    virtual ~SDTokenBurnRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SDTokenBurnRequest members

    /// <summary>
    /// The Player&#39;s id, can be found with Player/getId(s). (ex. CzySggxVQz51jciGRFDY7d5BER2fav6TNEnPGjusPJPd)
    /// </summary>
    utility::string_t getPlayerId() const;
    bool playerIdIsSet() const;
    void unsetPlayerId();

    void setPlayerId(const utility::string_t& value);

    /// <summary>
    /// An an array of objects to burn (ex. [{tokenId: 5, amount: \&quot;6\&quot;}])
    /// </summary>
    std::vector<std::shared_ptr<SDTokenBurnRequest_tokenObjects_inner>>& getTokenObjects();
    bool tokenObjectsIsSet() const;
    void unsetTokenObjects();

    void setTokenObjects(const std::vector<std::shared_ptr<SDTokenBurnRequest_tokenObjects_inner>>& value);


protected:
    utility::string_t m_PlayerId;
    bool m_PlayerIdIsSet;
    std::vector<std::shared_ptr<SDTokenBurnRequest_tokenObjects_inner>> m_TokenObjects;
    bool m_TokenObjectsIsSet;
};


}
}
}
}

#endif /* GG_STARDUST_CORESDK_MODEL_SDTokenBurnRequest_H_ */
