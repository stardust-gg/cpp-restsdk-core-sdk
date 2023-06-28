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



#include "StardustCoreSDK/model/SDPlayerGetIdResponse.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {



SDPlayerGetIdResponse::SDPlayerGetIdResponse()
{
    m_PlayerId = utility::conversions::to_string_t("");
    m_PlayerIdIsSet = false;
}

SDPlayerGetIdResponse::~SDPlayerGetIdResponse()
{
}

void SDPlayerGetIdResponse::validate()
{
    // TODO: implement validation
}

web::json::value SDPlayerGetIdResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PlayerIdIsSet)
    {
        val[utility::conversions::to_string_t(U("playerId"))] = ModelBase::toJson(m_PlayerId);
    }

    return val;
}

bool SDPlayerGetIdResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("playerId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("playerId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPlayerId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPlayerId);
            setPlayerId(refVal_setPlayerId);
        }
    }
    return ok;
}

void SDPlayerGetIdResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_PlayerIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("playerId")), m_PlayerId));
    }
}

bool SDPlayerGetIdResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("playerId"))))
    {
        utility::string_t refVal_setPlayerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("playerId"))), refVal_setPlayerId );
        setPlayerId(refVal_setPlayerId);
    }
    return ok;
}

utility::string_t SDPlayerGetIdResponse::getPlayerId() const
{
    return m_PlayerId;
}

void SDPlayerGetIdResponse::setPlayerId(const utility::string_t& value)
{
    m_PlayerId = value;
    m_PlayerIdIsSet = true;
}

bool SDPlayerGetIdResponse::playerIdIsSet() const
{
    return m_PlayerIdIsSet;
}

void SDPlayerGetIdResponse::unsetPlayerId()
{
    m_PlayerIdIsSet = false;
}
}
}
}
}

