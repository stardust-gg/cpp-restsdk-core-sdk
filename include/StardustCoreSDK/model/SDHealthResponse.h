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
 * SDHealthResponse.h
 *
 * Data model for the /health response
 */

#ifndef GG_STARDUST_CORESDK_MODEL_SDHealthResponse_H_
#define GG_STARDUST_CORESDK_MODEL_SDHealthResponse_H_


#include "StardustCoreSDK/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {


/// <summary>
/// Data model for the /health response
/// </summary>
class  SDHealthResponse
    : public ModelBase
{
public:
    SDHealthResponse();
    virtual ~SDHealthResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SDHealthResponse members

    /// <summary>
    /// Connect to AWS subsystems worked properly, i.e. OK
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);


protected:
    utility::string_t m_Status;
    bool m_StatusIsSet;
};


}
}
}
}

#endif /* GG_STARDUST_CORESDK_MODEL_SDHealthResponse_H_ */
