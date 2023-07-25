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



#include "StardustCoreSDK/model/SDTemplateGetTokensResponse.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {



SDTemplateGetTokensResponse::SDTemplateGetTokensResponse()
{
    m_TokenIsSet = false;
    m_PlayerIsSet = false;
}

SDTemplateGetTokensResponse::~SDTemplateGetTokensResponse()
{
}

void SDTemplateGetTokensResponse::validate()
{
    // TODO: implement validation
}

web::json::value SDTemplateGetTokensResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TokenIsSet)
    {
        val[utility::conversions::to_string_t(U("token"))] = ModelBase::toJson(m_Token);
    }
    if(m_PlayerIsSet)
    {
        val[utility::conversions::to_string_t(U("player"))] = ModelBase::toJson(m_Player);
    }

    return val;
}

bool SDTemplateGetTokensResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("token"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("token")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SDTemplateGetTokensResponse_token> refVal_setToken;
            ok &= ModelBase::fromJson(fieldValue, refVal_setToken);
            setToken(refVal_setToken);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("player"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("player")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SDTemplateGetTokensResponse_player> refVal_setPlayer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPlayer);
            setPlayer(refVal_setPlayer);
        }
    }
    return ok;
}

void SDTemplateGetTokensResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("token")), m_Token));
    }
    if(m_PlayerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("player")), m_Player));
    }
}

bool SDTemplateGetTokensResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("token"))))
    {
        std::shared_ptr<SDTemplateGetTokensResponse_token> refVal_setToken;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("token"))), refVal_setToken );
        setToken(refVal_setToken);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("player"))))
    {
        std::shared_ptr<SDTemplateGetTokensResponse_player> refVal_setPlayer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("player"))), refVal_setPlayer );
        setPlayer(refVal_setPlayer);
    }
    return ok;
}

std::shared_ptr<SDTemplateGetTokensResponse_token> SDTemplateGetTokensResponse::getToken() const
{
    return m_Token;
}

void SDTemplateGetTokensResponse::setToken(const std::shared_ptr<SDTemplateGetTokensResponse_token>& value)
{
    m_Token = value;
    m_TokenIsSet = true;
}

bool SDTemplateGetTokensResponse::tokenIsSet() const
{
    return m_TokenIsSet;
}

void SDTemplateGetTokensResponse::unsetToken()
{
    m_TokenIsSet = false;
}
std::shared_ptr<SDTemplateGetTokensResponse_player> SDTemplateGetTokensResponse::getPlayer() const
{
    return m_Player;
}

void SDTemplateGetTokensResponse::setPlayer(const std::shared_ptr<SDTemplateGetTokensResponse_player>& value)
{
    m_Player = value;
    m_PlayerIsSet = true;
}

bool SDTemplateGetTokensResponse::playerIsSet() const
{
    return m_PlayerIsSet;
}

void SDTemplateGetTokensResponse::unsetPlayer()
{
    m_PlayerIsSet = false;
}
}
}
}
}


